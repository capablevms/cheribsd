/*-
 * Copyright (c) 2014 Robert N. M. Watson
 * All rights reserved.
 *
 * This software was developed by SRI International and the University of
 * Cambridge Computer Laboratory under DARPA/AFRL contract (FA8750-10-C-0237)
 * ("CTSRD"), as part of the DARPA CRASH research programme.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <sys/types.h>

#include <assert.h>
#include <stdlib.h>

void	crt_init_globals(void);
void	crt_call_constructors(void);

/*
 * In version 3 of the CHERI sandbox ABI, function pointers are capabilities.
 * The CTORs list is the single exception: CTORs are used to set up globals
 * that contain function pointers so (until we have proper linker support) we
 * are still generating them as a sequence of PCC-relative integers.
 */
typedef unsigned long long mips_function_ptr;
typedef void (*cheri_function_ptr)(void);

static mips_function_ptr __attribute__((used))
    __attribute__((section(".ctors")))
    __CTOR_LIST__[1] = { (mips_function_ptr)(-1) };

static mips_function_ptr __attribute__((used))
    __attribute__((section(".dtors")))
    __DTOR_LIST__[1] = { (mips_function_ptr)(-1) };

extern void *__dso_handle;
void *__dso_handle;

/*
 * Symbols provided by crtendC.c, which provide us with the tails for the
 * constructor and destructor arrays.
 */
extern mips_function_ptr __CTOR_END__;
extern mips_function_ptr __DTOR_END__;

/*
 * Execute constructors; invoked by the crt_sb.S startup code.
 *
 * NB: This code and approach is borrowed from the MIPS ABI, and works as long
 * as CHERI code generation continues to use 64-bit integers for pointers.  If
 * that changes, this might need to become more capability-appropriate.
 */
void
crt_call_constructors(void)
{
	mips_function_ptr *func;

	for (func = &__CTOR_LIST__[0];
	    (vaddr_t)func != (vaddr_t)&__CTOR_END__;
	    func++) {
		if (*func != (mips_function_ptr)-1) {
			cheri_function_ptr cheri_func =
				(cheri_function_ptr)__builtin_cheri_offset_set(
						__builtin_cheri_program_counter_get(), *func);
			cheri_func();
		}
	}
}

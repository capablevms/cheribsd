//===-- RegisterContextLinux_mips64.h ---------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLDB_SOURCE_PLUGINS_PROCESS_UTILITY_REGISTERCONTEXTLINUX_MIPS64_H
#define LLDB_SOURCE_PLUGINS_PROCESS_UTILITY_REGISTERCONTEXTLINUX_MIPS64_H

#include "RegisterInfoInterface.h"
#include "lldb/lldb-private.h"

class RegisterContextLinux_mips64 : public lldb_private::RegisterInfoInterface {
public:
  RegisterContextLinux_mips64(const lldb_private::ArchSpec &target_arch,
                              bool msa_present = true);

  size_t GetGPRSize() const override;

  const lldb_private::RegisterInfo *GetRegisterInfo() const override;

  const lldb_private::RegisterSet *GetRegisterSet(size_t set) const;

  size_t GetRegisterSetCount() const;

  uint32_t GetRegisterCount() const override;

  uint32_t GetUserRegisterCount() const override;

private:
  const lldb_private::RegisterInfo *m_register_info_p;
  uint32_t m_register_info_count;
  uint32_t m_user_register_count;
};

#endif


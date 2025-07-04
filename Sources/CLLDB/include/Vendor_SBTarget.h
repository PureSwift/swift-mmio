//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift MMIO open source project
//
// Copyright (c) 2025 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
//
//===----------------------------------------------------------------------===//

#pragma once

namespace lldb {

class SBProcess;

class SBTarget {
public:
  ~SBTarget();

  lldb::SBProcess GetProcess();
};

} // namespace lldb

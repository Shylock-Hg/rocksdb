//  Copyright (c) 2011-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under both the GPLv2 (found in the
//  COPYING file in the root directory) and Apache 2.0 License
//  (found in the LICENSE.Apache file in the root directory).
//
// Copyright (c) 2011 The LevelDB Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.

#pragma once

#include <string>

#include "rocksdb/rocksdb_namespace.h"

namespace ROCKSDB_NAMESPACE {
namespace port {
namespace xpress {

bool Compress(const char* input, size_t length, std::string* output);

// Returns written size or 0 on failure including if buffer is too small.
size_t CompressWithMaxSize(const char* input, size_t length, char* output,
                           size_t max_output_size);

char* Decompress(const char* input_data, size_t input_length,
                 size_t* uncompressed_size);

int64_t GetDecompressedSize(const char* input, size_t input_length);

int64_t DecompressToBuffer(const char* input, size_t input_length, char* output,
                           size_t output_length);

}  // namespace xpress
}  // namespace port
}  // namespace ROCKSDB_NAMESPACE

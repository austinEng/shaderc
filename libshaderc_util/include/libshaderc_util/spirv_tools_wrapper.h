// Copyright 2016 The Shaderc Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef LIBSHADERC_UTIL_INC_SPIRV_TOOLS_WRAPPER_H
#define LIBSHADERC_UTIL_INC_SPIRV_TOOLS_WRAPPER_H

#include <string>
#include <vector>

#include "spirv-tools/libspirv.h"

namespace shaderc_util {
// Disassembles the given binary. Returns SPV_SUCCESS and writes the
// disassembled text to *text_or_error if successful. Otherwise, writes the
// error message to *text_or_error.
spv_result_t DisassembleBinary(const std::vector<uint32_t>& binary,
                               std::string* text_or_error);
}  // namespace shaderc_util

#endif  // LIBSHADERC_UTIL_INC_SPIRV_TOOLS_WRAPPER_H

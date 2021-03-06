/*
 * Copyright 2020 The TensorFlow Runtime Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//===- basic_kernels.h - Interface to basic_kernels library -----*- C++ -*-===//
//
// This library contains basic operations that are used by many different
// clients of the host executor, including basic control flow and scalar
// arithmetic.
//
//===----------------------------------------------------------------------===//

#ifndef TFRT_BASIC_KERNELS_BASIC_KERNELS_H_
#define TFRT_BASIC_KERNELS_BASIC_KERNELS_H_

namespace tfrt {
class KernelRegistry;

void RegisterBooleanKernels(KernelRegistry* registry);
void RegisterIntegerKernels(KernelRegistry* registry);
void RegisterFloatKernels(KernelRegistry* registry);
void RegisterControlFlowKernels(KernelRegistry* registry);

}  // namespace tfrt

#endif  // TFRT_BASIC_KERNELS_BASIC_KERNELS_H_

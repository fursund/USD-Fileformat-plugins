/*
Copyright 2023 Adobe. All rights reserved.
This file is licensed to you under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License. You may obtain a copy
of the License at http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under
the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR REPRESENTATIONS
OF ANY KIND, either express or implied. See the License for the specific language
governing permissions and limitations under the License.
*/
#pragma once

#include "pxr/base/arch/export.h"

#if defined(PXR_STATIC)
#    define USDGLTF_API
#    define USDGLTF_API_TEMPLATE_CLASS(...)
#    define USDGLTF_API_TEMPLATE_STRUCT(...)
#    define USDGLTF_LOCAL
#else
#    if defined(USDGLTF_EXPORTS)
#        define USDGLTF_API ARCH_EXPORT
#        define USDGLTF_API_TEMPLATE_CLASS(...) ARCH_EXPORT_TEMPLATE(class, __VA_ARGS__)
#        define USDGLTF_API_TEMPLATE_STRUCT(...) ARCH_EXPORT_TEMPLATE(struct, __VA_ARGS__)
#    else
#        define USDGLTF_API ARCH_IMPORT
#        define USDGLTF_API_TEMPLATE_CLASS(...) ARCH_IMPORT_TEMPLATE(class, __VA_ARGS__)
#        define USDGLTF_API_TEMPLATE_STRUCT(...) ARCH_IMPORT_TEMPLATE(struct, __VA_ARGS__)
#    endif
#    define USDGLTF_LOCAL ARCH_HIDDEN
#endif
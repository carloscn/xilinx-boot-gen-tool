// 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
/******************************************************************************
* Copyright 2019-2021 Xilinx, Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
******************************************************************************/

#ifndef D_cdo_alloc
#define D_cdo_alloc

#include "dyn_link.h"

CDOUTIL_EXPORT void * myalloc(size_t len);
CDOUTIL_EXPORT void * myalloc_zero(size_t len);
CDOUTIL_EXPORT void * myrealloc(void * p, size_t len);
CDOUTIL_EXPORT void myfree(void * p);

#endif /* D_cdo_alloc */

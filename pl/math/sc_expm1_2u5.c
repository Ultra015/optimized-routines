/*
 * Streaming-compatible version of SVE expm1
 *
 * Copyright (c) 2024, Arm Limited.
 * SPDX-License-Identifier: MIT OR Apache-2.0 WITH LLVM-exception
 */
#define ENABLE_SC_COMPAT 1
#include "sv_expm1_2u5.c"
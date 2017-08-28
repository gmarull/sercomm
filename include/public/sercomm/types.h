/*
 * MIT License
 *
 * Copyright (c) 2017 Ingenia-CAT S.L.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef PUBLIC_SERCOMM_TYPES_H_
#define PUBLIC_SERCOMM_TYPES_H_

#include <stdlib.h>

/** Visual Studio 2008 does not provide C99 fixed-size integers. */
#ifdef _MSC_VER
#  if _MSC_VER == 1500
typedef signed __int8 int8_t;
typedef signed __int16 int16_t;
typedef signed __int32 int32_t;
typedef unsigned __int8 uint8_t;
typedef unsigned __int16 uint16_t;
typedef unsigned __int32 uint32_t;
typedef signed __int64 int64_t;
typedef unsigned __int64 uint64_t;
#  else
#    error Unsupported MSVC version
#  endif
#else
#  include <stdint.h>
#endif

SER_BEGIN_DECL

/**
 * @file sercomm/types.h
 * @brief Base types.
 * @ingroup SER
 * @{
 */

/** Library instance. */
typedef struct ser ser_t;

/*
 * Library error codes.
 */

/** General failure. */
#define SER_EFAIL       -1
/** Invalid input values. */
#define SER_EINVAL      -2
/** Device was disconnected. */
#define SER_EDISCONN    -3
/** Operation timed out. */
#define SER_ETIMEDOUT   -4
/** No such device. */
#define SER_ENODEV      -5
/** Device is busy. */
#define SER_EBUSY       -6
/** Feature not supported. */
#define SER_ENOTSUP     -7
/** Buffer empty. */
#define SER_EEMPTY     -8

/** @} */

SER_END_DECL

#endif

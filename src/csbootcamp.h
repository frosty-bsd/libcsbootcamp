/**
 * csbootcamp Library for C
 * https://github.com/frosty-bsd/libcsbootcamp
 *
 * Based on Eric Roberts' genlib.c and simpio.c.
 *
 * Copyright (c) 2022
 * All rights reserved
 *
 * BSD 3-Clause License
 * http://www.opensource.org/licenses/BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * * Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * * Neither the name of csbootcamp nor the names of its contributors may be used
 *   to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef csbootcamp_H
#define csbootcamp_H

#include <float.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>


typedef char *string;

char get_char(const char *format, ...) __attribute__((format(printf, 1, 2)));

double get_double(const char *format, ...) __attribute__((format(printf, 1, 2)));

float get_float(const char *format, ...) __attribute__((format(printf, 1, 2)));

int get_int(const char *format, ...) __attribute__((format(printf, 1, 2)));

long get_long(const char *format, ...) __attribute__((format(printf, 1, 2)));

long long get_long_long(const char *format, ...) __attribute__((format(printf, 1, 2)));

string get_string(va_list *args, const char *format, ...) __attribute__((format(printf, 2, 3)));

#define get_string(...) get_string(NULL, __VA_ARGS__)

#endif

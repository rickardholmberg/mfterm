#ifndef UTIL__H
#define UTIL__H

/**
 * Copyright (C) 2011 Anders Sundman <anders@4zm.org>
 *
 * This file is part of mfterm.
 *
 * mfterm is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * mfterm is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with mfterm.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Parts of code used in this file are from the GNU readline library file
 * fileman.c (GPLv3). Copyright (C) 1987-2009 Free Software Foundation, Inc
 */

/* Strip whitespace from the start and end of STRING.  Return a pointer
   into STRING. */
char* trim(char* string);

// Allocate a new string and duplicate the argument string.
char* strdup(const char* string);

// Print a byte array in hex without byte separation
void print_hex_array(const unsigned char* data, size_t nbytes);

// Print a byte array in hex with the specified byte separation.
void print_hex_array_sep(const unsigned char* data, size_t nbytes, char* sep);

// Print binary data as ascii - replace non printable chars with nonascii
void print_ascii_rendering(const unsigned char* data, size_t nbytes, char nonascii);

#endif

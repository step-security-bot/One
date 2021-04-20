/*
 * Copyright 2021 - Max Base, <maxbasecode@gmail.com>
 * This file is part of One Programming Language.
 *
 * one-language is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * one-language is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with one-language.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define printf printf
#define print printf
#define VERSION "0.3.0"
#define ARCH "linux/amd64"

void main_help(void);
void main_badcommand(int argc, char *argv[]);
void main_badparam(void);
void main_badflag(void);
void main_version(int argc);
void main_parse(int argc, char *argv[]);
int main(int argc, char *argv[]);

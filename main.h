#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int _strln(const char str[]);
int _putshar(char c);
int _printf(const char *format, ...);
int output_num(long num, int i);
int (*sm_selector(char str))(va_list args);
int d_placer(va_list arg);
int c_placer(va_list arg);
int s_placer(va_list arg);
int i_placer(va_list arg);

#endif

#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
#include <wchar.h>
#include <stdlib.h>

void	mx_printint(int n);
void	mx_print_unicode(wchar_t c);
void	mx_print_strarr(char **arr, const char *delim);
void	mx_printchar(char c);
void	mx_printstr(const char *s);
int	mx_strlen(const char *s);
int	mx_sqrt(int x);
double	mx_pow(double n, unsigned int pow);
char	*mx_nbr_to_hex(unsigned long nbr);
char	*mx_strnew(const int size);

#endif

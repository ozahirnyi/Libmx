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
int	mx_strcmp(const char *s1, const char *s2);
int	mx_sqrt(int x);
int	mx_strncmp(const char *s1, const char *s2, int n);
int	mx_is_space(char c);
double	mx_pow(double n, unsigned int pow);
char	*mx_nbr_to_hex(unsigned long nbr);
char	*mx_strnew(const int size);
char	*mx_strcpy(char *dst, const char *src);
char	*mx_strncpy(char *dst, const char *src, int len);
char	*mx_strtrim(const char *str);

#endif

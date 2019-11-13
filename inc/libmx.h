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
int	mx_memcmp(const void *s1, const void *s2, size_t n);
int	mx_strlen(const char *s);
int	mx_strcmp(const char *s1, const char *s2);
int	mx_sqrt(int x);
int	mx_strncmp(const char *s1, const char *s2, int n);
int	mx_is_space(char c);
int	mx_count_words(const char *str, char c);
int	mx_get_substr_index(const char *str, const char *sub);
int	mx_skip_substr_index(const char *str, const char *sub, int counter);
int	mx_count_substr(const char *str, const char *sub);
double	mx_pow(double n, unsigned int pow);
char	*mx_nbr_to_hex(unsigned long nbr);
char	*mx_strnew(const int size);
char	*mx_strcpy(char *dst, const char *src);
char	*mx_strncpy(char *dst, const char *src, int len);
char	*mx_strtrim(const char *str);
char	*mx_strcat(char *restrict s1, const char *restrict s2);
char	*mx_unic_strcat(const char s1, const char s2);
char	*mx_strdup(const char *s1);
char	*mx_strndup(const char *s1, size_t n);
char	*mx_ultra_strtrim(const char *str, char c);
char	*mx_ultra_del_extra_spaces(const char *str, char c);

typedef struct s_list {
	void *data;
	struct s_list *next;
} t_list;

t_list	*mx_create_node(void *data);
int	mx_list_size(t_list *list);
void	mx_push_front(t_list **list, void *data);
void	mx_push_back(t_list **list, void *data);

#endif

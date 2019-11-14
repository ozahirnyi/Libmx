#include "../inc/libmx.h"

int	mx_memcmp(const void *s1, const void *s2, size_t n) {
	char *str1 = (char *)s1;
	char *str2 = (char *)s2;
	unsigned int i;

	for (i = 0; i < n && str1[i] == str2[i]; i++);
	return str1[i] - str2[i];
}

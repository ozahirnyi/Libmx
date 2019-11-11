#include "../inc/libmx.h"

#include <stdio.h>
#include <string.h>

int	mx_memcmp(const void *s1, const void *s2, size_t n) {
	char *str1 = (char *)s1;
	char *str2 = (char *)s2;
	unsigned int i;

	for (i = 0; i < n && str1[i] == str2[i]; i++);
	return str1[i] - str2[i];
}
/*
int	main(void) {
	char b[] = "";
	char *res = NULL;

	//printf("%d\n", memcmp(res, b, 6));
	printf("%d\n", mx_memcmp(res, b, 6));
	return 0;
}*/

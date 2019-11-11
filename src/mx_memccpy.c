#include "../inc/libmx.h"

#include <stdio.h>
#include <string.h>

void	*mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
	char *buf = (char *)src;
	char *res = (char *)dst;
	unsigned int i;

	for (i = 0; i < n && buf[i - 1] != c; i++)
		res[i] = buf[i];
	res[i] = '\0';
	return dst;
}
/*
int	main(void) {
	char b[] = "xxxxXXXX";
	char res[] = "";

//	memccpy(res, b, 'q', 15);
//	printf("%s\n", res);
	mx_memccpy(res, b, 'q', 12);
	printf("%s\n", res);
	
	return 0;
}*/

#include "../inc/libmx.h"

#include <stdio.h>
#include <string.h>

void	*mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
	char *buf = (char *)src;
	char *res = (char *)dst;
	unsigned int i;

	if (n <= 0)
		return dst;
	for (i = 0; i < n; i++)
		res[i] = buf[i];
	res[i] = '\0';
	return dst;
}
/*
int	main(void) {
	char b[12] = "xxxxXXXX";
	char res[12] = "qq";

	printf("%s\n", memcpy(res, b, 12));
	printf("%s\n", mx_memcpy(res, b, 12));
	return 0;
}*/

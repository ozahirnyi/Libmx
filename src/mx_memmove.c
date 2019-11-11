#include "../inc/libmx.h"

#include <string.h>
#include <stdio.h>

void	*mx_memmove(void *dst, const void *src, size_t len) {
	char *cdst = (char *)dst;
	char *csrc = (char *)src;
	char *temp = mx_strnew(len);
	unsigned int i;

	for (i = 0; i < len; i++)
		temp[i] = csrc[i];
	for (i = 0; i < len; i++)
		cdst[i] = temp[i];
	return cdst;
}
/*
int	main(void) {
	char b[] = "1234567890";
	
//	printf("%s\n", mx_memmove(&b[3], &b[4], 3));
	printf("%s\n", memmove(&b[3], &b[4], 3));
	return 0;
}*/

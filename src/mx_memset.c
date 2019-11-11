#include "../inc/libmx.h"

#include <stdio.h>
#include <string.h>

void	*mx_memset(void *b, int c, size_t len) {
	char *buf = (char *)b;
	unsigned int i;

	for (i = 0; i < len; i++)
		buf[i] = c;

	return b;
}
/*
int	main(void) {
//	char b[10] = "xxxxXXXX";
	int	c = 'c';

	printf("%s\n", memset(NULL, c, 4));
//	printf("%s\n", mx_memset(NULL, c, 4));
	return 0;
}*/

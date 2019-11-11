#include "../inc/libmx.h"

#include <stdio.h>
#include <string.h>

void	*mx_memchr(const void *s, int c, size_t n) {
	char *smem = (char *)s;
	unsigned int i;

	for (i = 0; *smem && i < n; smem++) {
		if (*smem == c)
			return smem;
		i++;
	}
	return NULL;
}
/*
int	main(void) {
	char b[] = "xxxXXX";

	printf("%s\n", memchr(b, 'q', 1));
	printf("%s\n", mx_memchr(b, 'q', 1));
	return 0;
}*/

#include "../inc/libmx.h"

#include <stdio.h>
#include <string.h>

void	*mx_memrchr(const void *s, int c, size_t n) {
	char *smem = (char *)s;
	unsigned int i = mx_strlen(s);

	while (smem[i] != c)
		i--;
	if (i >= n)
		return NULL;
	while (i > 0) {
		smem++;
		i--;
	}
	return smem;
}

int	main(void) {
	printf("%s\n", mx_memrchr("Trinity", 'M', 5)); //returns "ity"
//	printf("%s\n", memchr("Trinity", 'i', 2));
	return 0;
}

#include "../inc/libmx.h"

void	*mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
	char *buf = (char *)src;
	char *res = (char *)dst;
	unsigned int i;

	for (i = 0; i < n; i++) {
		*dst++;
		if (buf[i] == c)
			return dst;
		res[i] = buf[i];
	}
	return dst;
}

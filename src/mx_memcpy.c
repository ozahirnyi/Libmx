#include "../inc/libmx.h"

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

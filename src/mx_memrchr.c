#include "../inc/libmx.h"

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

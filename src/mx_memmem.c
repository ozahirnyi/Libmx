#include "../inc/libmx.h"

#include <stdio.h>
#include <string.h>

void	*mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
	char *sbig = (char *)big;
	char *slit = (char *)little;

	if (big_len < little_len || little_len == 0 || big_len == 0)
		return NULL;
	while (*sbig++) {
		if (*sbig == *slit) {
			if (mx_memcmp(sbig, slit, little_len - 1) == 0)
				return sbig;
		}
	}
	return NULL;
}
/*
int	main(void) {
	printf("%s\n", mx_memmem("McDonalds", 0, "Dons", 6));
	printf("%s\n", memmem("McDonalds", 0, "Dons", 6));

	return 0;
}*/

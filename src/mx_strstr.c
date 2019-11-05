#include "../inc/libmx.h"

#include <stdio.h>

char	*mx_strstr(const char *haystack, const char *needle) {
	while (*haystack) {
		if (*haystack == *needle) {
			if (mx_strncmp(haystack, needle, mx_strlen(needle)) == 0)
				return (char *)haystack;
		}
		haystack++;
	}
	return NULL;
}

int	main(void) {
	char *haystack = "McDonalds";
	char *needle = "Don";

	printf("%s\n", mx_strstr(haystack, needle));
	return 0;
}

#include "../inc/libmx.h"

#include <stdio.h>

int	mx_get_substr_index(const char *str, const char *sub) {
	int	i;

	i = 0;
	if (!str || !sub)
		return -2;
	while (*str) {
		if (*str == *sub) {
			if (mx_strncmp(str, sub, mx_strlen(sub)) == 0)
				return i;
		}
		str++;
		i++;
	}
	return -1;
}
/*
int	main(void) {
	char *str = "McDonalds";
	char *sub;

	printf("%d\n", mx_get_substr_index(str, sub));
	return 0;
}*/

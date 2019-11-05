#include "../inc/libmx.h"

#include <stdio.h>

int	mx_count_substr(const char *str, const char *sub) {
	int	i;

	i = 0;
	if (!str || !sub)
		return -1;
	while (*str) {
		if (*str == *sub) {
			if (mx_strncmp(str, sub, mx_strlen(sub)) == 0)
				i++;
		}
		str++;
	}
	return i;
}
/*
int	main(void) {
	char *str = "yo, yo, yo Neo";
	//char *sub = "yo";
	printf("%d\n", mx_count_substr(str, NULL));
	return 0;
}*/

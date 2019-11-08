#include "../inc/libmx.h"

#include <stdio.h>

int	mx_skip_substr_index(const char *str, const char *sub, int counter) {
	int	i;

	i = 0;
	if (!str || !sub || counter < 0)
			return -2;
	while (*str) {
		if (*str == *sub) {
			if (mx_strncmp(str, sub, mx_strlen(sub)) == 0) {
				if (counter == 0)
					return i;
				counter--;
			}
		}
		str++;
		i++;
	}
	return -1;
}
/*
int	main(void) {
	char *str = "Tururu";
	char *sub = "ru";

	printf("%d\n", mx_skip_substr_index(str, sub, 1));
	return 0;
}*/

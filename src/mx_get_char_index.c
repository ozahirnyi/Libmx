#include "../inc/libmx.h"

#include <stdio.h>

int	mx_get_char_index(const char *str, char c) {
	int	i;

	if (str == NULL)
		return -2;
	for(i = 0; str[i] != '\0'; i++) {
		if (str[i] == c)
			return i;
	}
	return -1;
}
/*
int	main(void) {
	char *s = NULL;

	printf("%d\n", mx_get_char_index(s, 'q'));
	return 0;
}*/

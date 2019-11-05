#include "../inc/libmx.h"

#include <stdio.h>

int	mx_count_words(const char *str, char c) {
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0') {
		if (str[i] == c)
			res++;
		i++;
	}
	return res;
}

int	main(void) {
	char *str = "  follow  *   the  white rabbit ";
	printf("%d\n", mx_count_words(str, '*'));
	printf("%d\n", mx_count_words(str, '5'));
	printf("%d\n", mx_count_words(str, '*'));
	return 0;
}

#include "../inc/libmx.h"

#include <stdio.h>

char	**mx_strsplit(const char *s, char c) {
	char **res;
	char *extra;
	int i;
	int	a;
	int count;

	i = 0;
	a = 0;
	extra = mx_del_extra_spaces(s);
	res = (char **)malloc((mx_count_word(s) + 1) * sizeof(char));
	while (extra[i] != '\0') {
		if (extra[i] == c) {
			count = i;
			res[a] = mx_strndup(&extra[count], (i - count));
		}
		i++;
	}
	return res;
}

#include "../inc/libmx.h"

char	**mx_strsplit(const char *s, char c) {
	char **res;
	char *extra;
	int i;
	int	a;
	int count;

	i = -1;
	a = 0;
	count = 0;
	if (!mx_count_words(s, c))
		return NULL;
	extra = mx_ultra_del_extra_spaces(s, c);
	res = (char **)malloc((mx_count_words(s, c) + 1) * sizeof(char *));
	while (extra[++i])
		if (extra[i] == c || extra[i + 1] == '\0') {
			res[a++] = mx_strndup(&extra[count], (i - count));
			count = i + 1;
		}
	res[a] = NULL;
	return res;
}

#include "../inc/libmx.h"

#include <stdio.h>

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
/*
int	main(void) {
	char **a = NULL;
	printf("%s\n", a[0]);
	char *s = NULL;//"**Good bye,**Mr.*Anderson.****";

	char **q = mx_strsplit(s, '*');
	if (q) {
		for(int i = 0; q[i]; i++) {
			printf("%s\n", q[i]);
		}
	}
	return 0;
}*/
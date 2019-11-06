#include "../inc/libmx.h"

#include <stdio.h>

char	*mx_strjoin(const char *s1, const char *s2) {
	int len;
	char *res;
	char *buf0;
	char *buf1;

	res = NULL;
	if (!s1 && !s2)
		return NULL;
	else if (!s1)
		res = mx_strdup(s2);
	else if (!s2)
		res = mx_strdup(s1);
	else {
		len = mx_strlen(s1) + mx_strlen(s2);
		res = mx_strnew(len);
		buf0 = mx_strdup(s1);
		buf1 = mx_strdup(s2);
		res = mx_strcat(buf0, buf1);
	}
	return res;
}
/*
int	main(void) {
	char *str1 = "this";
	char *str2 = "dodge ";
	char *str3 = NULL;
	printf("%s\n", mx_strjoin(str2, str1));
	printf("%s\n", mx_strjoin(str1, str3));
	printf("%s\n", mx_strjoin(str3, str3));
	return 0;
}*/

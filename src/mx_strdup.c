#include "../inc/libmx.h"

char	*mx_strdup(const char *s1) {
	char *res;

	res = mx_strnew(mx_strlen(s1));
	mx_strcpy(res, s1);
	return res;
}
/*
int	main(void) {
	char *q1 = NULL;

	printf("%s\n", mx_strdup(q1));
	return 0;
}*/

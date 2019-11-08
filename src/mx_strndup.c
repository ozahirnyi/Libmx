#include "../inc/libmx.h"

char	*mx_strndup(const char *s1, size_t n) {
	int	i;
	char *res;

	i = 0;
	res = mx_strnew(n);
	mx_strncpy(res, s1, n);
	return res;
}
/*
int	main(void) {
		char *s1 = "xxxxxxxxxx";
		char *s2 = NULL;
		s2 = mx_strndup(s1, 5);
		printf("%s\n", s2);
	return 0;
}*/

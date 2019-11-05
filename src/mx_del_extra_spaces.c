#include "../inc/libmx.h"

#include <stdio.h>

char	*mx_del_extra_spaces(const char *str) {
	char *buf;
	char *res;
	int	i;
	int	j;
	int space;

	i = 0;
	space = 0;
	j = 0;
	buf = mx_strtrim(str);
	//printf("%s\n", buf);
	while (buf[i] != '\0') {
		if (mx_is_space(buf[i]) == 0)
			j++;
		if (mx_is_space(buf[i + 1]) == 1 && buf[i + 1] != '\0' && mx_is_space(buf[i]) == 0)
			space++;
		i++;
	}
	res = mx_strnew(j + space + 1);
	printf("%d\n", space);
	i = 0;
	j = 0;
	printf("%s\n", buf);
	while (buf[i] != '\0') {
		if (mx_is_space(buf[i]) == 0) {
			res[j] = buf[i];
			j++;
		}
		if (buf[i + 1] != '\0' && mx_is_space(buf[i]) == 1 && mx_is_space(buf[i - 1]) == 0) {
			res[j] = ' ';
			j++;
		}
		i++;
	}
	buf[i + 1] = '\0';
	return res;
}

int	main(void) {
	char *str = "\f  My name...     is  \r Neo  \t\n ";

	printf("%s\n", mx_del_extra_spaces(str));
	return 0;
}

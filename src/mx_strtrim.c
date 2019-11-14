#include "../inc/libmx.h"

char	*mx_strtrim(const char *str) {
	int	i;
	int j;
	int	q;
	char *new;

	i = 0;
	q = 0;
	j = mx_strlen(str) - 1;
	while (mx_is_space(str[i++]) == 1)
	while (mx_is_space(str[j--]) == 1)
	new = mx_strnew(j - i);
	while (i++ <= j) {
		new[q] = str[i];
		q++;
	}
	new[q] = '\0';
	return new;
}

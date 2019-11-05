#include "../inc/libmx.h"

char	*mx_strcat(char *restrict s1, const char *restrict s2) {
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0') {
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return s1;
}

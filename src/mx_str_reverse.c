#include "../inc/libmx.h"

void	mx_str_reverse(char *s) {
	int	i;
	int j;
	char q;

	i = 0;
	j = 0;
	if (s == NULL)
		return ;
	while (s[i])
		i++;
	i -= 1;
	while (i < j) {
		q = s[i];
		s[i] = s[j];
		s[j] = q;
		i--;
		j++;
	}
}

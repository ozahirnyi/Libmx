#include "../inc/libmx.h"

#include <stdio.h>

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

int	main(void) {
	char *s = "xxqzz";

	mx_str_reverse(s);
	printf("%s\n", s);
	return 0;
}

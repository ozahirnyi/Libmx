#include "../inc/libmx.h"
#include <stdio.h>

void	mx_swap_char(char *s1, char *s2) {
	char s;

	if (s1 && s2) {
		s = *s1;
		*s1 = *s2;
		*s2 = s;
	}
}

int	main(void) {
	char s[] = "ONE";

	mx_swap_char(&s[0], &s[1]);
	mx_swap_char(&s[1], &s[2]);
	printf("%s\n", s);
	return 0;
}

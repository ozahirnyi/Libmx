#include "../inc/libmx.h"

#include <stdio.h>
#include <string.h>

int	mx_strncmp(const char *s1, const char *s2, int n) {
	int	i;

	i = 0;
	if (n == 0)
		return 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return s1[i] - s2[i];
}
/*
int	main(void) {
	char *s1 = "XxxxX";
	char *s2 = "QxqxX";

	printf("%d\n", mx_strncmp(s1, s2, 0));
	printf("%d\n", strncmp(s1, s2, 0));
	return 0;
}*/

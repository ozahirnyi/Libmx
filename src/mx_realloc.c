#include "../inc/libmx.h"

#include <string.h>
#include <stdio.h>

int	main(void) {
	int i;
	char c = 48;
	char *str = mx_strnew(10);
	for(i = 0; i < 12; i++)
		str[i] = c++;
	str[i] = '\0';
	printf("%s\n", str);
	str = (char *)realloc(str, 5 * sizeof(char *));
	c = 48;
	for(i = 0; i < 15; i++)
		str[i] = c++;
	str[i] = '\0';
	printf("%s\n", str);
	return 0;
}

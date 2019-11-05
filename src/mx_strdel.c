#include "../inc/libmx.h"

#include <stdio.h>

void	mx_strdel(char **str) {
	free(*str);
	*str = NULL;
}

int	main(void) {
	char *arr[] = {"XXXX", "QQQQ", "ZZZZ", NULL};
	mx_strdel(arr);
	for (int i = 0; i > 4; i++)
		printf("%s\n", arr[i]);
	return 0;
}

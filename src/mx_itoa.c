#include "../inc/libmx.h"

char	*mx_itoa(int number) {
	char *res;
	int	i;
	int temp;

	i = 0;
	temp = number;
	while (temp) {
		temp /= 10;
		i++;
	}
	res = mx_strnew(i);
	

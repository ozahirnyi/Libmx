#include "../inc/libmx.h"
#include <stdio.h>

char *mx_nbr_to_hex(unsigned long nbr) {
	unsigned long temp;
	int i;
	char *res;

	if (nbr == 0) {
		res = mx_strnew(1);
		res[0] = 48;
		return res;
	}
	i = 0;
	temp = nbr;
	while (temp) {
		temp /= 16;
		i++;
	}
	res = mx_strnew(i);
	i -= 1;
	while (nbr) {
		temp = nbr % 16;
		if (temp >= 0 && temp <= 9)
			res[i] = temp + 48;
		else
			res[i] = temp + 87;
		nbr /= 16;
		i--;
	}
	return res;
}

int	main(void) {
	printf("%s\n", mx_nbr_to_hex(4294967295));
	return 0;
}

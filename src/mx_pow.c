#include "../inc/libmx.h"
#include <stdio.h>

double	mx_pow(double n, unsigned int pow) {
	double	res;

	res = 1;
	if (pow == 0)
		return 1;
	else {
		while (pow > 0) {
			res *= n;
			pow--;
		}
	}
	return res;
}

int	main(void) {
	printf("%f\n", mx_pow(5, 4));
	return 0;
}

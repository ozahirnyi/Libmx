#include "../inc/libmx.h"

void	mx_printint(int n) {
	if (n == -2147483648) {
		mx_printchar('-');
		mx_printchar('2');
		n = 147483648;
	}
	if (n < 0) {
		mx_printchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		mx_printchar(n + 48);
	if (n > 9) {
		mx_printint(n / 10);
		mx_printint(n % 10);
	}
}

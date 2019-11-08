#include "../inc/libmx.h"

void	replaser(char *res, const char *replace, int i) {	
	int	len = mx_strlen(replace);

	int j = 0;
	if (mx_strlen(sub) > mx_strlen(replace))
		len = mx_strlen(sub);
	else
		len = mx_strlen(replace);
	for (; i <= len; i++) {
		res[i] = replace[j];
		j++;
	}
}

char	*mx_replace_substr(const char *str, const char *sub, const char *replace) {
	int	i = 0;
	int	len;
	int	counter = 0;
	char *res;

	res = (char *)malloc((mx_count_substr(str, sub) * len) + 1 + 10);
	while (str[i]) {
		if (i == mx_skip_substr_index(str, sub, counter)) {
			replaser(res, replace, i);
			i += len;
			counter++;
		}
		else {
			res[i] = str[i];
			i++;
		}
	}
	return res;
}

int	main(void) {
	printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ta"));
	return 0;
}

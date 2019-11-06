#include "../inc/libmx.h"

#include <stdio.h>

/*char	*mx_ultra_strtrim(const char *str, char c) {
	int	i;
	int j;
	int	q;
	char *new;

	i = 0;
	q = 0;
	j = mx_strlen(str) - 1;
	while (str[i] == c)
		i++;
	while (str[j] == c)
		j--;
	new = mx_strnew(j - i + 1);
	while (i <= j) {
		new[q] = str[i];
		q++;
		i++;
	}
	return new;
}
*/
int	mx_count_words(const char *str, char c) {
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str == NULL)
		return -1;
	while (str[i] != '\0') {
		if (str[i] == c && str[i + 1] != '\0' && str[i + 1] != c)
			res++;
		i++;
	}
	if (str[0] != c && res > 0)
		res++;
	return res;
}
/*
int	main(void) {
//	   char *str1 = "   *frsdgerg * follow";


//  char *str1 = "* ";


//  char *str1 = "gdf ";
//  char *str1 = " follow * the white rabbit ";

//  char *str1 = "*********** f";

  char *str1 = "    ";
  printf("%d\n", mx_count_words(str1, '*'));
//  printf("%d\n", mx_count_words(str, ' '));
  //  printf("%d\n", mx_count_words(str1, 'F'));
//  printf("%d\n", mx_count_words(str, '^'));
	return 0;
}*/

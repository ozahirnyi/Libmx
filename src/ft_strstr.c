#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void) {
	char *str = "Xxxxqxxqxxx";
	char *to_find = "qxxq";

	printf("%s\n", ft_strstr(str, to_find));
	return 0;
}

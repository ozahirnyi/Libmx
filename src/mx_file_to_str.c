#include "../inc/libmx.h"

char	*mx_file_to_str(const char *file) {
	int	fd = open(file, O_RDONLY);
	int	len = 0;
	char *str = NULL;
	char c = 0;

	if (fd < 0)
		return NULL;
	while (read(fd, &c, 1))
		len++;
	close(fd);
	if (len <= 0)
		return NULL;
	fd = open(file, O_RDONLY);
	str = mx_strnew(len);
	for (int i = 0; read(fd, &c, 1); i++)
		str[i] = c;
	close(fd);
	return str;
}

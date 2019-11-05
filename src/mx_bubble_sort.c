#include "../inc/libmx.h"

int	mx_bubble_sort(char **arr, int size) {
	int	i;
	int	j;
	int	count;
	char *buf;

	i = 0;
	j = 0;
	count = 0;
	while (j <= size) {
		while (i < size - 1) {
			if (mx_strcmp(arr[i], arr[i + 1]) > 0) {
				buf = arr[i];
				arr[i] = arr[i + 1];
				count++;
			}
			i++;
		}
		i = 0;
		j++;
	}
	return count;
}

int main(void) {
	char *arr[] = {"abc", "xyz", "ghi", "def"};
	printf("%d\n", mx_bubble_sort(arr, 4));
	return 0;
}

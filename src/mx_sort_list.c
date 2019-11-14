#include "../inc/libmx.h"

t_list	*mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
	int	size = mx_list_size(lst);
	int i = 0;
	int j = 0;
	void *buf= NULL;
	t_list *start = lst;
	while (j <= size) {
		while (i < size - 1) {
			if (cmp(start->data, start->next->data) == 1) {
				buf = start->data;
				start->data = start->next->data;
				start->next->data = buf;
			}
			start = start->next;
			i++;
		}
		i = 0;
		start = lst;
		j++;
	}
	return lst;
}

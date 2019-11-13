#include "../inc/libmx.h"
#include <stdbool.h>
/*
bool	cmp(void *a, void *b) {
	if (mx_strcmp((char *)a, (char *)b) > 0)
		return 1;
	else
		return 0;
}*/

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

int	main(void) {
    t_list *test1;

    char t[5] = "zzzz\0";
    char t1[5] = "cccc\0";
    char t2[5] = "aaaa\0";

    test1 = mx_create_node(t2);

    mx_push_back(&test1, t1);
    mx_push_back(&test1, t);

	mx_sort_list(test1, cmp);
    for (int i = 0; i < 3; i++) {
        printf("data: %s\n", test1->data);
        test1 = test1->next;
    }
    return 0;
}

#include "../inc/libmx.h"

void	mx_push_front(t_list **list, void *data) {
	t_list *new_node = mx_create_node(data);

	new_node->next = (*list);
	(*list) = new_node;
}
/*
int	main(void) {
	t_list *test1;

	char t[5] = "xxxx\0";
	char t1[5] = "qqqq\0";
	char t2[5] = "zzzz\0";

	test1 = mx_create_node(t1);

	mx_push_front(&test1, t);
	mx_push_front(&test1, t2);

	while (test1 != NULL) {
		printf("data: %s\n", test1->data);
		test1 = test1->next;
	}
	return 0;
}*/

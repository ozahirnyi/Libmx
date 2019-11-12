#include "../inc/libmx.h"

t_list	*mx_create_node(void *data) {
	t_list *node = (t_list *)malloc(sizeof(t_list));

	node->data = data;
	node->next = NULL;

	return node;
}
/*
int	main(void) {
	t_list *test;

	char *b = NULL;
	test = mx_create_node(b);
	printf("data: %s\n", test->data);
	return 0;
}*/

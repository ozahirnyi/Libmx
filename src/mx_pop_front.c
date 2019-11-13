#include "../inc/libmx.h"

void	mx_pop_front(t_list **head) {
	t_list *buf = (*head)->next;

	free(*head);
	*head = buf;
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
       // printf("1data: %s\n", test1->data);

	mx_pop_front(&test1);
    while (test1 != NULL) {
        printf("data: %s\n", test1->data);
        test1 = test1->next;
    }
    return 0;
}*/

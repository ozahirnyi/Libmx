#include "../inc/libmx.h"

void	mx_pop_back(t_list **head) {
	t_list *buf = *head;

	if ((*head)->next == NULL) {
		free(*head);
		*head = NULL;
	}
	else {
		while (buf->next->next != NULL)
			buf = buf->next;
		free(buf->next);
		buf->next = NULL;
	}
}
/*
int main(void) {
        t_list *test1;

    char t[5] = "xxxx\0";
    char t1[5] = "qqqq\0";
    char t2[5] = "zzzz\0";

    test1 = mx_create_node(t1);

    mx_push_front(&test1, t);
    mx_push_front(&test1, t2);

	mx_pop_back(&test1);
    while (test1 != NULL) {
        printf("data: %s\n", test1->data);
        test1 = test1->next;
    }
    return 0;
}*/

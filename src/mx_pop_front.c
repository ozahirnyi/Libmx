#include "../inc/libmx.h"

void	mx_pop_front(t_list **head) {
	t_list *buf = NULL;
	if (*head != NULL && head != NULL) {
		buf = (*head)->next;
		free(*head);
		*head = buf;
	}
}

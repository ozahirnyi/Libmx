#include "../inc/libmx.h"

void	mx_push_back(t_list **list, void *data) {
	t_list *new_node = mx_create_node(data);
	t_list *buf = *list;

	while (buf->next != NULL)
		buf = buf->next;
	buf->next = new_node;
}
/*
int main(void) {
    t_list *test1;

   // char t[5] = "xxxx\0";
  //  char t1[5] = "qqqq\0";
    char t2[5] = "zzzz\0";

   // test1 = mx_create_node(t);

 //   mx_push_back(&test1, t1);
    mx_push_back(&test1, t2);

    //for (int i = 0; i < 3; i++) {
        printf("data: %s\n", test1->data);
      //  test1 = test1->next;
   // }
    return 0;
}*/

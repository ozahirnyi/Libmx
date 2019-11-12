#include "../inc/libmx.h"

int	mx_list_size(t_list *list) {
	t_list *buf = list;
	int	i = 0;

	while (buf != NULL) {
		buf = buf->next;
		i++;
	}
	return i;
}
/*
int main(void) {
    t_list *test1;

    char t[5] = "xxxx\0";
    char t1[5] = "qqqq\0";
    char t2[5] = "zzzz\0";

    test1 = mx_create_node(t);

    mx_push_back(&test1, t1);
    mx_push_back(&test1, t2);

	printf("%d\n", mx_list_size(test1));
 //   for (int i = 0; i < 3; i++) {
   ///     printf("data: %s\n", test1->data);
      //  test1 = test1->next;
   // }
    return 0;
}*/

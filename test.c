#include "inc/libmx.h"
#include <stdbool.h>

int main(void) {
    //mx_printchar('c');
	//mx_printchar('\n');
    //mx_printstr("sss");
	//mx_printchar('\n');
    //mx_print_unicode(0x23F1);
	//mx_printchar('\n');
    //char *arr[] = {"abc", "xyz", "ghi", "def", NULL};
    //mx_print_strarr(arr, "  ");
	//mx_printchar('\n');
    //mx_printint(0);
	//mx_printchar('\n');
    //printf("%f\n", mx_pow(4, 1));
	//mx_printchar('\n');
    //printf("%d\n", mx_sqrt(0));
	//mx_printchar('\n');
	//printf("%s\n", mx_itoa(2147483647));
	//int arr[] = {12345, 12345};
	//mx_foreach(arr, 2, mx_printint);
	//char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
	//int count = 0;
	//printf("%d\n", mx_binary_search(arr, 6, "ab", &count));
	//printf("%d\n", count);
	//printf("%d\n", mx_bubble_sort(arr, 4));
	//printf("%d\n", mx_strlen("12345"));
	//char str[] = "ONE";
	//mx_swap_char(&str[0], &str[1]);
	//printf("%s\n", str);
	//mx_swap_char(&str[1], &str[2]);
	//printf("%s\n", str);
	//char str[] = "game over";
	//mx_str_reverse(str);
	//printf("%s\n", str);
	//printf("%d\n", mx_get_char_index("XxxcxxX", 'q'));
	//char str[4] = "xxX\0";
	//char str1[6] = "QqqqQ\0";
	//str = mx_strndup(str1, 0);
	//str = mx_strdup(str1);
	//printf("%s\n", mx_strncpy(str, str1, 3));
	//printf("%d\n", mx_strncmp("Xxxa", "Xxxd", 3));
	//char str[10] = "Xxxx\0";
	//char str1[5] = "QqqQ\0";
	//printf("%s\n", mx_strcat(str, str1));
	//#include <string.h>
	//printf("%s\n", mx_strstr("xxxq", "xxxq"));
	//printf("%s\n", strstr(NULL, "xxxq"));
	//printf("%d\n", mx_get_substr_index("McDonalds", "Don"));
	//printf("%d\n", mx_get_substr_index("McDonalds Donuts", "on"));
	//printf("%d\n", mx_get_substr_index("McDonalds", "Donq"));
	//printf("%d\n", mx_get_substr_index("McDonalds", NULL));
	//printf("%d\n", mx_get_substr_index(NULL, "Don"));
	//printf("%d\n", mx_count_substr(NULL, "yo"));
	//printf("%d\n", mx_count_words(" follow * the white rabbit ", '/'));
	//char *str = mx_strnew(10);
	//printf("%s", mx_strtrim("\f My name... is Neo \t\n "));
	//char *str = "\f My name... is Neo \t\n";
	//char *res = mx_del_extra_spaces(str);
	//printf("%s\n", res);
	//char *str = "**Good bye,**Mr.*Anderson.****";
	//char **res = mx_strsplit(str, '*');
	//char *res = mx_ultra_del_extra_spaces(str, '*');
	//for (int i = 0; i < 4; i++)
	//	printf("%s\n", res[i]);
	//printf("%s\n", res);
	//const char s1[5] = "this\0";
	//const char s2[11] = "dodge \0";
	//const char *s3 = NULL;
	//char *res = mx_strjoin(NULL, s1);
	//printf("%s\n", res);
	//const char *str = "McDonalds";
	//const char *sub = "alds";
	//const char *replace = NULL;//"uts";
	//printf("%s\n", mx_replace_substr(str, sub, replace));
	//printf("%s\n", mx_file_to_str("qwe"));
	#include <string.h>
	char b[] = "qqxq";
	char q[] = "zzxz";
	int c = 'x';
	size_t len = 4;
//	printf("%s\n", mx_memset(b, c, len));
//	printf("%s\n", memset(b, c, len));
	//printf("%s\n", mx_memcpy(q, b, len));
	//printf("%s\n", memcpy(q, b, len));
	printf("%s\n", mx_memccpy(q, b, c, len));
	//printf("%s\n", memccpy(q, b, c, len));
	
	system("leaks -q a.out");
	return 0;
}

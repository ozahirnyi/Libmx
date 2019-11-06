#include "../inc/libmx.h"

#include <stdio.h>

void    newstr(char *buf, char *res, char c) {
    int i;
    int j;

    i = 0;
    j = 0;
    while (buf[i] != '\0') {
        if (buf[i] != c) {
            res[j] = buf[i];
            j++;
        }
        if (buf[i + 1] != '\0' && buf[i] == c && buf[i - 1] != c) {
            res[j] = c;
            j++;
        }
        i++;
    }
}

char    *mx_ultra_del_extra_spaces(const char *str, char c) {
    char *buf;
    char *res;
    int i;
    int j;
    int space;

    i = 0;
    space = 0;
    j = 0;
    buf = mx_ultra_strtrim(str, c);
    while (buf[i] != '\0') {
        if (buf[i] != c)
            j++;
        if (buf[i + 1] == c && buf[i + 1] != '\0' && buf[i] != c)
            space++;
        i++;
    }
    res = mx_strnew(j + space + 1);
    newstr(buf, res, c);
    return res;
}

int main(void) {
    char *str = "**Good bye,**Mr.*Anderson.****";

    printf("%s\n", mx_ultra_del_extra_spaces(str, '*'));
    return 0;
}

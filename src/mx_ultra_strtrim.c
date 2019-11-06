#include "../inc/libmx.h"

#include <stdio.h>

char    *mx_ultra_strtrim(const char *str, char c) {
    int i;
    int j;
    int q;
    char *new;

    i = 0;
    q = 0;
    j = mx_strlen(str) - 1;
    while (str[i] == c)
        i++;
    while (str[j] == c)
        j--;
    new = mx_strnew(j - i);
    while (i <= j) {
        new[q] = str[i];
        q++;
        i++;
    }
    new[q] = '\0';
    return new;
}
/*
int main(void) {
    char *str = "\f  My name... is Neo  \t\n ";
    printf("%s\n", mx_strtrim(str));
    return 0;
}*/

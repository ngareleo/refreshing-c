#include <stdio.h>

int cgetline(char s[], int lim) {
    int i, c;

    while (i < lim && (c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
    }

    if (c == '\n') {
        s[i++] = c;
    }

    s[i++] = '\0';

    return i;
}

#define LIMIT 100

void test_cgetline() {
    char s[LIMIT];
    int r = cgetline(s, LIMIT);
    printf("Read values :%d\n", r);
    printf("Value is %s\n", s);
}

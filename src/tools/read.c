#include <stdio.h>
#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch() {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
    if (bufp >= BUFSIZE) {
        printf("too many chars written to buffer");
    } else {
        buf[bufp++] = c;
    }
}

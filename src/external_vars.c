#include <stdio.h>
#include <ctype.h>

#include "./basic.c"
#include "./tools/read.c"
#include "./tools/stack.c"

#define limit 100

int getop(char s[]);

float reverse_polish_calculator() {
    int type;
    char s[limit];

    while((type = getop(s) != EOF) {
        switch (type) {
            case NUMBER:

        }
    }
}


int getop(char s[])
{
    int c, i;
    while ((s[0] = c = getch()) == ' ' || c == '\t'){ ; } /** Skip over space until first digit */
    s[1] = '\0';

    if (!isdigit(c) && c != ' ') { return c; } /** Return if a non digit like * + etc */

    i = 0;
    if (isdigit(c)){
        while (isdigit(s[i++] = c = getch())) {;} /** Collect digits */
    }

    if (c == '.') {
        while (isdigit(s[i++] = c = getch())) {;}
    }

    if (c == EOF) {
        ungetch(c);
    }

    return NUMBER;
}

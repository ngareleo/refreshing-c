#define limit 100

float stack[limit];
int p = 0;

void push(float a) {
    if (p == limit) {
        return;
    }
    stack[p++] = a;
}

float pop() {
    if (p == 0) {
        return '\0';
    }
    return stack[p--];
}

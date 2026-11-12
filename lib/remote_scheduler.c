#include <stdio.h>
#include <stdlib.h>

static int compute_session(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 11) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", compute_session(11, 11));
    return 0;
}

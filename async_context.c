#include <stdio.h>
#include <stdlib.h>

static int compute_gateway(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 16) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", compute_gateway(16, 16));
    return 0;
}

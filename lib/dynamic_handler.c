#include <stdio.h>
#include <stdlib.h>

static int encode_collector(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 18) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", encode_collector(18, 18));
    return 0;
}

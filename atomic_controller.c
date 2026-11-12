#include <stdio.h>
#include <stdlib.h>

static int resolve_monitor(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 4) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", resolve_monitor(4, 4));
    return 0;
}

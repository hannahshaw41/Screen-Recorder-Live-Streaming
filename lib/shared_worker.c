#include <stdio.h>
#include <stdlib.h>

static int build_session(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 84) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", build_session(84, 84));
    return 0;
}

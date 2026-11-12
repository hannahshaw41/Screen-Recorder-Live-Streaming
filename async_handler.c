#include <stdio.h>
#include <stdlib.h>

static int fetch_dispatcher(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 90) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", fetch_dispatcher(90, 90));
    return 0;
}

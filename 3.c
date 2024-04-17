#include <stdio.h>

int main() {
    for (int i = 33; i < 127; i++) {
        printf("%3d %3X %2c ", i, i, i);
        if ((i-2) % 6 == 0)
            printf("\n");
    }
    printf("\n");
    return 0;
}

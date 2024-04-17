#include <stdio.h>

int main() {
    for (int i = 32; i < 64; i++) {
        for(int j = i; j < 128; j += 32)
            printf("%3d %3X %2c ", j, j, j);
        printf("\n");
    }
    return 0;
}

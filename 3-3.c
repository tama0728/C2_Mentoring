#include <stdio.h>

int atoi(char s[]) {
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

int main(int argc, char *argv[]) {
    int num1, num2;
    if (argc < 3 || argc > 4){
        printf("please check arguments.\n");
        return 1;
    }
    if (argv[1][0] == '-')
        if (argv[1][1] == 'r'){
            num1 = atoi(argv[3]);
            num2 = atoi(argv[2]);
            for (int i = num1; i >= num2; i--) {
                if (num1-i && (num1-i) % 5 == 0)
                    printf("\n");
                printf("%4d", i);
            }
            printf("\n");
            return 0;
        } else {
            printf("please check arguments.\n");
            return 1;
    } else {
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
        for (int i = num1; i <= num2; i++) {
            if (i-num1 && (i-num1) % 5 == 0)
                printf("\n");
            printf("%4d", i);
    }
    printf("\n");
    return 0;
    }
}

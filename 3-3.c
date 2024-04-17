#include <stdio.h>

int main(int argc, char *argv[]) {
    int order = 0;
    printf("argc %d\n", argc);
    for (int i = 0; i < argc; i++)
        printf("%s\n", argv[i]);
    if (argc < 4 || argc > 5){
        printf("please check arguments.\n");
        return 1;
    }
    if (argc == 4)
        order = *++argv - '0';
    if (order != 0 && order != 1)
        order = 0;
    else {
        printf("please check arguments.\n");
        return 1;
    }
    printf("%d\n", order);
    if (!order)
        for (int i = s; i < e+1; i++){
            printf("%d ", i);
            if ((i-s) % 5 == 0 )
                printf("\n");
    return 0;
    }
}

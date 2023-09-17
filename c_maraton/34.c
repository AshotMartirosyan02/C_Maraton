#include <stdio.h>

int main() {
    int num;
    do
    {
        printf("mutqagreq tiv\n");
        scanf("%d", &num);
    } while (num <= 0);
    
    int arajin = 0, erkrord = 1, next = 0;

    printf("Fibonacci Tvern en`  ");
    
    for (int i = 0; i < num; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = arajin + erkrord;
            arajin = erkrord;
            erkrord = next;
        }
        printf("%d ", next);
    }

    printf("\n");
    return 0;
}
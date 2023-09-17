#include<stdio.h>
int main(){
        int x = 0;
        int y = 0;
        do
        {
                printf("Մուտքագրեք դրական թիվ\n");
                scanf("%d", &x);
        } while (x <= 0);

        for (int i = 0; i <= 10; ++i)
        {
                y = x * i;
                printf("%d * %i = %d\n", x, i, y);
        }  
}
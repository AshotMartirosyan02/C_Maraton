#include<stdio.h>
int main(){
        int num = 0;
        do
        {
               printf("Մուտքագրեք դրական թիվ\n");
               scanf("%d", &num);
        } while (num <= 0);
        for (int i = 1; i < num + 1; i++)
        {
                for (int z = 1; z < i + 1; z++)
                {
                        printf("%d", i);
                }
                printf("\n");
        }       
}
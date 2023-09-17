#include<stdio.h>
int main(){
    int num = 0, x=0, sum= 0;
   
        printf("Մուտքագրեք թիվ \n");
        scanf("%d", &num);
        
   
    while (num>0)
{
        x = num % 10;
        sum += x;
        num = num / 10;
}
printf("%d\n", sum);
}
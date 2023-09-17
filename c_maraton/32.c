#include<stdio.h>
int main(){
    int num = 0, x=0, y= 0;
    do
    {
        printf("Մուտքագրեք թիվ \n");
        scanf("%d", &num);
        
    } while (num < 12);
    
    while (num>0)
{
        x = num % 10;
        y = y * 10 + x;
        num = num / 10;
}
printf("%d\n", y);
}
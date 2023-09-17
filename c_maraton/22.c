#include<stdio.h>
int main(){
    int x = 0, y = 0;
    printf("Մուտքագրեք 2 թիվ");
    scanf("%d %d", &x, &y);
    if (x >= y)
    {
        printf("%d", x);
    }
    else
    {
        printf("%d", y);
    }
    
    
}
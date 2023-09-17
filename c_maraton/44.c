#include<stdio.h>
int main(){
    int x = 0, y = 0;
    printf("Մուտքագրեք 2 թիվ\n");
    scanf("%d %d", &x, &y);
    int c = x ^ y;
    printf("%d\n", c);
}
#include<stdio.h>
int main(){
    int num = 0,x = 0;
    printf("Մուտքագրեք թիվ\n");
    scanf("%d", &num);
    printf("Քանի բիթ եք ցանկանում տեղափոխել ձախ\n");
    scanf("%d", &x);
    num <<= x;
    printf("%d\n", num);
}
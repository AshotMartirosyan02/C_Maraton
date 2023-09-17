#include<stdio.h>
int main(){
    int x = 0;
    printf("Մուտքագրեք թիվ և այն կտպի (4 * x + 21 * x * x - 12) արտահայտության արժեքը\n");
    scanf("%d", &x);
    x = 4 * x + 21 * x * x - 12;
    printf("%d\n", x);
        return 0;

}
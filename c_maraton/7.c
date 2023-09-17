#include<stdio.h>
int main(){
    double x = 0;
    printf("Մուտքագրեք թիվ և այն կտպի (x / (5 + 2) + 30 * x - 51) արտահայտության արժեքը\n");
    scanf("%lf", &x);
    x = (x / (5 + 2) + 30 * x - 51);
    printf("%lf\n", x);
        return 0;

}
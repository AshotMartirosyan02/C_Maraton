#include<stdio.h>
int main(){
    int cel = 0, far = 0;
    printf("Մուտքագրեք Celsius\n");
    scanf("%d", &cel);
    far = (cel * 9/5) + 32;
    printf("%d\n", far);
}

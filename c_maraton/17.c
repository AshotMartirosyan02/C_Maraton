#include<stdio.h>
int main(){
    int A = 0, B = 0;
    printf("%d  %d %d  \n", A, B,  A && B ||  !B ^ A );
    A = 0, B = 1;
    printf("%d  %d %d  \n", A, B,  A && B ||  !B ^ A );
    A = 1, B = 0;
    printf("%d  %d %d  \n", A, B,  A && B ||  !B ^ A );
    A = 1, B = 1;
    printf("%d  %d %d  \n", A, B,  A && B ||  !B ^ A );

}
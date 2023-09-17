#include <stdio.h>
int main () {
    int a = 0;
    int count0 = 0;
    int count1 = 0;
    printf("muqagri tiv\n");
    scanf(" %d", &a);
    while (a != 0){
        if( a % 2 == 0){
            count0 += 1;
        }
        else{
            count1 += 1;
        }
        a /= 2;
    }
  printf("0֊ների քանակը %d֊ն են \n 1֊երի քանակը  %d֊ն են \n", count0, count1);
}
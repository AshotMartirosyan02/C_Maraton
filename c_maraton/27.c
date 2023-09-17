#include<stdio.h>
int main(){
int number;
    printf("tiv gri ");
    scanf("%d", &number);
    if ((number & (1 << 4)) == 0)
     { 
        number |= (1 << 4); 
    }
    
    printf("ardzyunqy: %d\n", number);
}
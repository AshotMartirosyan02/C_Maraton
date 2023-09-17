#include<stdio.h>
int main(){
        int x, y, z;
        printf("Մուտքագրեք 3 թիվ\n");
        scanf("%d %d %d", &x, &y, &z);
        if (x == y)
        {
               if(x > z){
                printf("%d\n", x);
               }
               else if (x < z)
               {
                printf("%d\n", z);
               }       
        }
         if (x == z)
        {
               if(x > y){
                printf("%d\n", x);
               }
               else if (x < y)
               {
                printf("%d\n", y);
               }       
        }
         if (z == y)
        {
               if(y > x){
                printf("%d\n", y);
               }
               else if (y < x)
               {
                printf("%d\n", x);
               }       
        }
        return 0; 
        
}
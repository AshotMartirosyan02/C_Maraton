#include<stdio.h>
 int main(){
        int x, y, z, s;
        int min;
        printf("Մուտքագրեք 4 թիվ\n");
        scanf("%d %d %d %d", &x, &y, &z, &s);
        if(x + y + z + s == 0){
              min = x;
              if (min > y)
              {
                min = y;
                printf("%d\n", min);
              }
              else if (min > z)
              {
                 min = z;
                printf("%d\n", min);
              }
               else if (min > s)
              {
                 min = s;
                printf("%d\n", min);
              }
               else
               {
                printf("%d\n", min);
               }    
        }
        return 0; 
 }
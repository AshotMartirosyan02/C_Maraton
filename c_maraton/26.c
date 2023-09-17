#include<stdio.h>
int main(){
    int x = 0, y = 0, z = 0;
    printf("Մուտքագրեք 3 թիվ\n");
    scanf("%d %d %d", &x, &y, &z);

    if (x < y)     //swap եմ անում։
    {
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
    }
    
    if (x < z)    //swap
    {
        x = x ^ z;
        z = x ^ z;
        x = x ^ z;
    }
     if (y < z)
    {
        y = y ^ z;
        z = y ^ z;
        y = y ^ z;
    }
    
    
   while (y!= 0)
   {
        int temp = y;
        y = x % y;
        x = temp;
   }

    if (z < x)
    {
     z = z ^ x;
     x = z ^ x;
     z = z ^ x;
    }
    while (x != 0)
    {
        int temp = x;
        x = z % x;
        z = temp;
    }
    

   
    printf("%d", z);
}
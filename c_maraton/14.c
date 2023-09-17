#include<stdio.h>
int main(){
    int age = 0;
    do
    {
        printf("Մուտքագրեք ձեր տարիքը\n");
        scanf("%d", &age);
        
    } while (age < 0 || age > 100);
    
    

    if (age > 0 && age <18)
    {
        printf("Դուք անչափահաս եք\n");

    }
    else if (age >= 18 && age <= 65)
    {
        printf("Դուք չափահաս եք\n");

    }
    else 
    {
        printf("Դու տարեց քաղաքացի ես \n");
    }
    
   
    
    
    
}
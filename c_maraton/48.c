#include<stdio.h>
int main(){
    char arr[100];
    printf("Մուտքագրեք բառ \n");
    int x = 0;
    scanf(" %s", arr);

    for (int i = 0; arr[i] != '\0'; i++)
    {
        
        x += 1;
    }  
    printf("%d\n", x); 
}
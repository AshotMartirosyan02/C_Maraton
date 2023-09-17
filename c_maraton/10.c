#include<stdio.h>
int main(){
    char sym;
    printf("Մուտքագրեք սիմվոլ\n");
    scanf(" %c", &sym);
    if (sym >= 48 && sym <= 57)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
        return 0;

}
#include<stdio.h>
int main(){
    int num = 57;
    int x = 0;
    
    do
    {
        printf("Մուտքագրեք թիվ\n");
        scanf("%d", &x);
        if (num > x)
        {   
            printf("Ձեր մուտքագրած թիվը փոքր է, Մուտքագրեք ավելի մեծ թիվ\n");
        }
        else if (num < x)
        {
            printf("Ձեր մուտքագրած թիվը մեծ է, Մուտքագրեք ավելի փոքր թիվ\n");
        }
    } while (num != x);
    
    printf("Ճիշտ մուտքագրում\n");
}
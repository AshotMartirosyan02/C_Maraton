#include<stdio.h>
int main(){
    char sym;
    int x = 0;
    printf("Մուտքագրեք տառերի քանակը\n");
    scanf("%d", &x);
    char arr[x];
    printf("Մուտքագրեք բառ\n");
    scanf(" %s", arr);

     for (int i = 0; i < x / 2; i++){
            if (arr[i] != arr[x - 1 - i])
            {
                     printf("Պալինդրոմ չէ");
                    return 1;
            }
            
     }
     printf("Մուտքագրված տողը պալինդրոմ է");
     return 0;
}
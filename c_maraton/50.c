#include<stdio.h>
int main(){
    int x = 0;
    printf("Մուտքագրեք զանգվածի չափը \n");
    scanf("%d", &x);
    char arr[x];
    printf("Մուտքագրել զանգվածի տարրերը\n");
    scanf(" %s", arr);
    for (int i = 0; i < x; i++)
    {
        if (arr[i] >= 48 && arr[i] <= 57)
        {
            printf(" %c\n", arr[i]);
        }
        
    }
    
}
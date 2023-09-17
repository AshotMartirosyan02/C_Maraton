#include<stdio.h>
int main(){
    int x = 0;
    printf("մուտքագրեք զանգվածի չափը\n");
    scanf("%d", &x);
    char arr[x];
    printf("Մուտքագրեք զանգվածի տարրերը՝ \n");
        scanf(" %s", arr);
        
    for (int i = 0; i < x; i++)
    {
        printf("%c", arr[x - i - 1]);
    }
    
}

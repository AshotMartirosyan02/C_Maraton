#include<stdio.h>
int main(){
        int x;
        printf("Մուտքագրեք տարեթիվ\n");
        scanf("%d", &x);
        if(x % 4 == 0){
                printf("Մուտքագրված տարիթիվը նահանջ տարի է\n");
        }
        else
        {
                printf("Մուտքագրված տարեթիվը նահանջ տարի չէ\n");
        }
        return 0; 
        
}
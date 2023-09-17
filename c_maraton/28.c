#include<stdio.h>
int main(){
        int x, y;
        printf("Մուտքագրեք 2 թիվ\n");
        scanf("%d %d", &x, &y);
        if (x % y == 0 && y != 0 || y % x == 0 && x != 0)
        {
                printf("Թվերը մեկը մյուսի վրա բաժանվում է\n");
        }
        else
        {
                printf("Թվերը չեն բաժանվում իրար վրա\n");
        }  
        return 0;     
}
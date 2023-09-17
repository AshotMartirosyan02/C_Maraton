#include<stdio.h>
int main(){
        int num1 = 0;
        int num2 = 0;
        int sum = 0;
        printf("Մուտքագրեք 2 թիվ\n");
        scanf("%d %d", &num1, &num2);
        if (num1 > num2)
        {
                int x = num2;
                num2 = num1;
                num1 = x;
        }
        if (num1 % 2 == 0)
        {
                ++num1;
        }       
        while (num1 < num2)
        {
                 if (num1 % 2 == 0)
                {
                        sum = sum + num1;   
                }
                ++num1;
        }
        printf("Ձեր մուտքագրած թվերի միջև ընկած զույգ թվերի գումարը կստացվի  %d\n", sum);
}
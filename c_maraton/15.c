#include<stdio.h>
int main(){
     int x = 0;
    scanf("%d", &x);
    if (x >= 90 && x <= 100)
    {
        printf("%s", "A դասարան");
    }
    else if (x >= 80 && x <= 89)
    {
        printf("%s", "B դասարան");
    }
    else if (x >= 70 && x <= 79)
    {
        printf("%s", "C դասարան");
    }
    else if (x >= 60 && x <= 69)
    {
        printf("%s", "D դասարան");
    }
    else if (x < 60)
    {
        printf("%s", "E Դասարան");
    }
    
}
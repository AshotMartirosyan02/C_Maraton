#include <stdio.h>
int main()
{
    int hasak;
    scanf("%d", &hasak);
    if (hasak >= 150 && hasak <= 100)
    {
        printf("%s", "«Դուք համապատասխանում եք»");
    }
    else if (hasak <150)
    {
        printf("%s", "«Ներողություն, դուք չեք համապատասխանում»");
    }
    return 0;
}
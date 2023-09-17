#include<stdio.h>
int main(){
    int A = 0, B = 0;


if (!(A && B) || A && !B || A)
{
    printf("False False - True\n");
}
else
{
    printf("False False - False\n");
}

    A = 0, B = 1;

if (!(A && B) || A && !B || A)
{
    printf("False True - True\n");
}
else
{
    printf("False True - False\n");
}
    A = 1, B = 0;
    
if (!(A && B) || A && !B || A)
{
    printf("True False - True\n");
}
else
{
    printf("True False - False\n");
}

    A = 1, B = 1;
if (!(A && B) || A && !B || A)
{
    printf("True True - True\n");
}
else
{
    printf("True True - False\n");
}
}
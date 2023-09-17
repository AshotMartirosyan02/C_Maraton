#include <stdio.h>
int main()
{
    char arr[100];
    scanf("%[^\n]s", arr);
    int countOfSpaces = 0;
    int count = 1;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ' ')
        {
            countOfSpaces++;
        }
        else
        {
            count++;
        }
    }
    char newArr[count];
    for (int i = 0, j = 0; i < count; j++)
    {
        if (arr[j] != ' ')
        {
            newArr[i] = arr[j];
            i++;
        }
    }
    printf(" %s", newArr);
}


#include<stdio.h>
int main(){

    char sym [50];
    scanf(" %s", sym);
    int x = 0, tmp = 0;
    for (int i = 0; sym[i] != '\0'; i++)
    {
        tmp ++;
        switch (sym[i])
        {
        case 'a':
        case 'A':
        case 'U':
        case 'u':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'y':
        case 'Y':

                x++;
            
            break;
        }
    }
    
    printf("Ձայնավորները  %d֊ն են\n", x);
    x = tmp - x;
    printf("բաղաձայները %d֊ն են\n",x);
    
}
#include <stdio.h>
int main (){
    int x = 0;
    scxnf("%d", &x);
    if( x % 2 == 0){
        printf( "Թիվը զույգ է \n");
    }
    else
    {
        printf("թիվը կենտ է\n");
    }
}
#include<stdio.h>
int main(){
        char sym;                                                                                                              
        printf("Մուտքագրեք տառ\n");
        scanf("%c", &sym);
        if(sym == 65 || sym == 69 || sym == 73 || sym == 79 || sym == 85  || sym == 97 || sym == 101 || sym == 105 || sym == 111 || sym == 117){
                printf("Մուտքագրված %c տառը ձայնավոր է\n", sym);
        }
        
        else if(sym >= 66 && sym <= 90 || sym >=98 && sym<= 122){
                printf("Մուտքագրված %c տառը բաղաձայն է\n", sym);
        }
        return 0; 
}
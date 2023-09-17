#include<stdio.h>
int main(){
    int x = 0, y = 0;
    printf("Մուտքագրեք թիվ և այն կտպի (x * y + 21 * x / y - 200) արտահայտության արժեքը\n");
    scanf("%d %d", &x, &y);
    if (y == 0)
    {
        printf("Թիվը 0֊ի վրա չի բաժանվում\n");
        return 1;
    }
    
    x = (x * y + 21 * x / y - 200);
    printf("%d\n", x);
    return 0;
}
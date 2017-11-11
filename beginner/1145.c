#include <stdio.h>

int main()
{
    int x, y, i;
    int n = 1;

    scanf("%d %d", &x, &y);
    
    for(i = 1; i <= y; i++){
            if(n == x) {
                printf("%d\n", i);
                n = 1;
            }else{
                printf("%d\n", i);
                n++;
            }
    }
    return 0;
}
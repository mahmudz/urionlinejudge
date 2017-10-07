#include <stdio.h>
int main()
{
    int a, i, count;

    scanf("%d", &a);
    count = 0;

    for(i = a; count < 6; i++){
        if(i%2 != 0){
            printf("%d\n", i);
            count++;
        }
    }
    return 0;
}




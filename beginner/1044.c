#include <stdio.h>

int main()
{
    int a,b,c;

    scanf("%d %d", &a, &b);
    if(a < b){
         c = a;
         a = b;
         b = c;
    }
    if(a%b == 0)
    {
        printf("Sao Multiplos\n");
    }else{
        printf("Nao sao Multiplos\n");
    }

    return 0;
}

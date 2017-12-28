#include <stdio.h>

int main()
{
    int x, y;

    while(x != y && y != x)
    {
        scanf("%d %d", &x, &y);

        if(x != y && y != x)
        {
            if(x > y)
            {
                printf("Decrescente\n");
            }
            else
            {
                printf("Crescente\n");
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}

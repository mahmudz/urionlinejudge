#include <stdio.h>

int main()
{
    int i, j, x, y, n, sum = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);

        if(x > y)
        {
            for(j = y; j <= x; j++)
            {
                if(j%2 != 0 && j != x && j != y)
                {
                    sum += j;
                }
            }
            printf("%d\n",sum);
            sum = 0;
        }
        else
        {
            for(j = x; j <= y; j++)
            {
                if(j%2 != 0 && j != x && j != y)
                {
                    sum += j;
                }
            }
            printf("%d\n",sum);
            sum = 0;
        }
    }
    return 0;
}


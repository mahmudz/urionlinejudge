#include <stdio.h>

int main()
{
    int x, y, i;
    int sum = 0;

    while(x != 0 && y != 0)
    {
        scanf("%d %d", &x, &y);

        if(x > 0 && y > 0)
        {
            if(x > y)
            {
                for(i = y; i <= x; i++)
                {
                    printf("%d ", i);
                    sum += i;
                }
                printf("Sum=%d\n",sum);
                sum = 0;
            }
            else
            {
                for(i = x; i <= y; i++)
                {
                    printf("%d ", i);
                    sum += i;
                }
                printf("Sum=%d\n",sum);
                sum = 0;
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}

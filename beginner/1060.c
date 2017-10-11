#include <stdio.h>
int main()
{
    int count;
    double a, b, c, d, e, f;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%lf", &e);
    scanf("%lf", &f);

    count = 0;

    if(a > 0)
    {
        count++;
    }
    if(b > 0)
    {
        count++;
    }
    if(c > 0)
    {
        count++;
    }
    if(d > 0)
    {
        count++;
    }
    if(e > 0)
    {
        count++;
    }
    if(f > 0)
    {
        count++;
    }

    printf("%d valores positivos\n", count);
    return 0;
}



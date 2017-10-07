#include <stdio.h>
int main()
{
    int count;
    double a, b, c, d, e, f, sum, avg;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%lf", &e);
    scanf("%lf", &f);

    count = 0;
    sum = 0;

    if(a > 0)
    {
        count++;
        sum = sum + a;
    }
    if(b > 0)
    {
        count++;
        sum = sum + b;
    }
    if(c > 0)
    {
        count++;
        sum = sum + c;
    }
    if(d > 0)
    {
        count++;
        sum = sum + d;
    }
    if(e > 0)
    {
        count++;
        sum = sum + e;
    }
    if(f > 0)
    {
        count++;
        sum = sum + f;
    }

    avg = sum / count;

    printf("%d valores positivos\n", count);
    printf("%.1lf\n", avg);

    return 0;
}



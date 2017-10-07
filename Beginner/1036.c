#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c, d, result1, result2;

    scanf("%lf %lf %lf", &a, &b, &c);


    d = (pow(b,2) - (4 * a * c));
    result1 = ((-b+sqrt(d)) / (2 * a));
    result2 = ((-b-sqrt(d)) / (2 * a));

    if(a != 0 && d > 0)
    {
        printf("R1 = %.5lf\n", result1);
        printf("R2 = %.5lf\n", result2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    int par = 0;
    int impar = 0;
    int pos = 0;
    int neg = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    if(a%2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }
    if(a > 0)
    {
        pos++;
    }
    else if(a < 0)
    {
        neg++;
    }
    if(b%2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }
    if(b > 0)
    {
        pos++;
    }
    else if(b < 0)
    {
        neg++;
    }
    if(c%2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }
    if(c > 0)
    {
        pos++;
    }
    else if(c < 0)
    {
        neg++;
    }
    if(d%2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }
    if(d > 0)
    {
        pos++;
    }
    else if(d < 0)
    {
        neg++;
    }
    if(e%2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }
    if(e > 0)
    {
        pos++;
    }
    else if(e < 0)
    {
        neg++;
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}

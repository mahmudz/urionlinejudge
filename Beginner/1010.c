#include <stdio.h>

int main(){

    int p1Code, p2Code, p1Unit, p2Unit;
    float p1UnPrice, p2UnPrice, cost;


    scanf("%d %d %f" , &p1Code, &p1Unit, &p1UnPrice);
    scanf("%d %d %f" , &p2Code, &p2Unit, &p2UnPrice);

    cost = (p1Unit * p1UnPrice) + (p2Unit * p2UnPrice);

    printf("VALOR A PAGAR: R$ %.2f\n", cost);

    return 0;
}

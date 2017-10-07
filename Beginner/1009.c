#include <stdio.h>

int main(){
    char name;
    double soldAmmount, fSalary, mSalary;


    scanf("%s", &name);
    scanf("%lf", &fSalary);
    scanf("%lf", &soldAmmount);

    mSalary = fSalary + (soldAmmount * 15 / 100);

    printf("TOTAL = R$ %.2f\n", mSalary);

    return 0;
}

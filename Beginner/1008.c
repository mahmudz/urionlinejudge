#include <stdio.h>

int main(){
    int empNo, hours;
    float rate, salary;


    scanf("%d", &empNo);
    scanf("%d", &hours);
    scanf("%f", &rate);

    salary = hours * rate;

    printf("NUMBER = %d\n", empNo);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}

#include <stdio.h>
int main()
{
    float salary;

    scanf("%f", &salary);

    if(salary >= 0.0 && salary <= 400.00)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", salary+(0.15*salary),0.15*salary, 15,'%');
    if(salary >= 400.01 && salary <= 800.00)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", salary+(0.12*salary),0.12*salary, 12,'%');
    if(salary >= 800.01 && salary <= 1200.00)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", salary+(0.10*salary),0.10*salary, 10,'%');
    if(salary >= 1200.01 && salary <= 2000.00)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", salary+(0.07*salary),0.07*salary, 7,'%');
    if(salary > 2000.00)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", salary+(0.04*salary),0.04*salary, 4,'%');

    return 0;
}



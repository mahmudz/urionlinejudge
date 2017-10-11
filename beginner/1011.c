#include <stdio.h>
#define pi 3.14159
int main(){

    int R;
    double result;

    scanf("%d" , &R);

    result = (4.0/3.0) * pi * R * R * R;

    printf("VOLUME = %.3lf\n", result);

    return 0;
}

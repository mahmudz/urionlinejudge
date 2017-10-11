#include <stdio.h>

int main(){
    int n, i;
    float a, b, c;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
            scanf("%f", &a);
            scanf("%f", &b);
            scanf("%f", &c);

            printf("%.1f\n", (a*2 + b*3 + c*5)/(2.0+3.0+5.0));
    }

    return 0;
}

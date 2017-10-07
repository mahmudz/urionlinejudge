#include<stdio.h>

int main(){

    int time, avgValue;
    float fuel;

 
     scanf("%d %d", &time, &avgValue);

     fuel = ((time * avgValue) / 12.0);

     printf("%.3f\n", fuel);

     return 0;
}
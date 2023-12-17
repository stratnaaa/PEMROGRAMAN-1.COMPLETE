#include <stdio.h>
int main(){
    //input 1// //input 2//
    float a, b, i, j, x, y, hsl;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &i);
    scanf("%f", &j);
    scanf("%f", &x);
    scanf("%f", &y);
    hsl = (a - b) * (i / j) - (x + y);
    printf("%.3f", hsl);
}

    
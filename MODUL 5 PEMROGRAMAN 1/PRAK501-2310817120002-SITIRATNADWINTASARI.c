#include <stdio.h>

int MaxBilangan(int a1, int b1, int c1, int d1){
    int max = a1;
if (b1 > max){
    max = b1;
    }
if (c1 > max){
    max = c1;
    }
if (d1 > max){
    max = d1;
    }
    return max;

}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
        printf("%d", hasil);
    return 0;
}
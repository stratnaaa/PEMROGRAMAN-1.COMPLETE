#include <stdio.h>
int main(){
   float a,b,x,y;
   a = 9;
   b = 6;
   x = 10;
   y = 7;
   printf("Variable a bernilai %.f\n", a);
   printf("Variable b bernilai %.f\n", b);
   printf("Variable x bernilai %.f\n", x);
   printf("Variable y bernilai %.f\n", y);
   printf("Hasil dari a ditambah b dikali x dibagi y adalah %.2f", (a + b) * x / y);
   
   return 0;
}
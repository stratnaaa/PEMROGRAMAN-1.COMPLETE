#include <stdio.h>
#include <math.h>
int main (){
   int a, t, simi;
   scanf("%d", &t);
   scanf("%d", &simi);
   a = sqrt(pow(simi,2) - pow(t,2));

   printf("Alas= %d cm\n", a);
   printf("Tinggi= %d cm\n",t);
   printf("Keliling= %d cm\n", a + t + simi);
   printf("Luas= %d ^cm2", a * t / 2);
   return 0;
    
}
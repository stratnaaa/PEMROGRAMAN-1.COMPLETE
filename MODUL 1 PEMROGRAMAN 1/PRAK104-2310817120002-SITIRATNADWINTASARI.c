#include <stdio.h>
int main(){
  int a,b;  
  a = 400000;
  b = 350000;
  printf("Harga sepatu A adalah %d\n", a);
  printf("Harga sepatu B adalah %d\n", b);
  printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", a -(a * 13/100));
  printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", b -(b * 21/100));
  return 0;
}
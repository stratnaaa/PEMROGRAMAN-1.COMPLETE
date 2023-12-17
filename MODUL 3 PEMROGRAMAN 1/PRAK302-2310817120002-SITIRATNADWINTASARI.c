#include <stdio.h>
int main (){
  int nilai;
   for (int i = 0; i < 5; i++){
    scanf("%d", &nilai);
    if (nilai >= 80){ 
        printf("A\n");
    } 
    else if (nilai >= 70 && nilai < 79){
        printf("B\n");
    }
    else if (nilai >= 60 && nilai < 69){
        printf("C\n");
    }
    else if (nilai >= 50 && nilai < 59){
        printf("D\n");
    }
    else if (nilai <= 50){
        printf("E\n");
    }
   } return 0;
}
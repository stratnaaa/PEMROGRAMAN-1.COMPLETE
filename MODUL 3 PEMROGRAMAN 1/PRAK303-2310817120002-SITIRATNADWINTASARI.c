#include <stdio.h>
int main (){
    int bil;
        for (int i = 0; i < 3; i++){
        scanf("%d", &bil);
        if (bil > 0){
        printf("Positif\n");
    }
        else if (bil < 0){
        printf("Negatif\n");
    } 
        else {
        printf("Nol");
    }
 }
     return 0;
}


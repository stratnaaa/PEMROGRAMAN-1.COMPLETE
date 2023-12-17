#include <stdio.h>
int main (){
    int a;
    for (int i = 0; i < 5; i++){
        scanf("%d",&a);
    if (a == 0){
        printf("Nol\n"); 
    }else if (a >= 1 && a  <= 9){
        printf("Satuan\n");
    }else if (a >= 10  && a <= 19){
        printf("Belasan\n");
    }else if (a >= 20 && a < 100){
        printf("Puluhan\n");
    }else {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }
    } return 0;
}
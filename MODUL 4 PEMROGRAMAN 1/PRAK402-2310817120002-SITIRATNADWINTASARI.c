#include <stdio.h>
int main (){
    int i, inp, ganjil, genap;
    for(i = 1; i <= 3; i++){
        scanf("%d", &inp);

        for (ganjil = 1; ganjil <= inp; ganjil++){
            if(ganjil % 2 != 0){
                printf("%d ",ganjil);
            }
        }
        printf("\n");
        for(genap = inp; genap >= 2; genap--){
            if(genap % 2 == 0){
                printf("%d ", genap);
            }
        }  printf("\n");
    } return 0;
}
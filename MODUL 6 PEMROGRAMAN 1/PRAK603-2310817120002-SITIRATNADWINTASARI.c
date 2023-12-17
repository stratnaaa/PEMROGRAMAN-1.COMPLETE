#include <stdio.h>
int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int b1[n1], b2[n2];
    if (n1 != n2){
        printf("Jumlah tidak sama\n");

    }else{
     for (int i = 0; i < n1; i++){
        scanf("%d", &b1[i]);
    }
    for (int j = 0; j < n2; j++){
        scanf("%d", &b2[j]);
    } 
    for (int l = 0; l < n1; l++){
        printf("%d ", b1[l] * b2[l]);
    }
} return 0;
}
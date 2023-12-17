#include <stdio.h>
int main (){
    int klp;
    char simbol;
    for (int i = 1; i <= 3; i++){
    scanf("%d %c", &klp, &simbol);
    for (int i = 1; i <= 50; i++){
        if (i % klp == 0){
            printf("%c ", simbol);
        } else{
            printf("%d ", i);
        }
    }
    } return 0;
}


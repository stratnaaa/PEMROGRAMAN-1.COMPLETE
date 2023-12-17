#include <stdio.h>
int main() {
    int no1, no2; 
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &no1, &no2);
        if (no1 >= no2) {
            printf("%d %d\n", no2, no1);
        } else {
            printf("%d %d\n", no1, no2); 
        }
    }  return 0;
}

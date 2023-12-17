#include <stdio.h>
int main(){
    int d,hr,jm,mn,dt;
    for (int i = 0; i < 5; i++){
    scanf("%d",&d);
    hr = d / 84600;
    jm = d / 3600;
    mn = (d - jm * 3600)/60;
    dt = (d - jm * 3600) - (mn * 60);
    if (hr >=1){
        printf("%d hari %.2d:%.2d:%.2d\n", hr, jm %24,mn, dt);
    } else {
        printf("%.2d:%.2d:%.2d\n",jm, mn, dt);
    }
    } return 0;
}


#include <stdio.h>

int main(){
    int g1;
    int max;
    int maxNo = 1;

    printf("Gpu1 sıcaklığı:\n");
    scanf("%d",&g1);
    max = g1;

    for(int i=2 ; i <= 6 ; i++){
        printf("\nGpu%d sıcaklığı:",i);
        scanf("%d",&g1);

        if(g1 > max){
            max = g1;
            maxNo = i;
        }
    }

    printf("En yuksek sicaklik: %d C",max); 
    printf("Gpu numarası: %d",maxNo);

    return 0;
}
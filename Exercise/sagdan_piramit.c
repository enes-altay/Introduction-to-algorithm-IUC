#include <stdio.h>


int main(){

    int satir,i,j;

    printf("Kac satir olacagini giriniz:");
    scanf("%d",&satir);

    for(i=1;i<=satir;i++){

        for(j=satir ; j>=i ; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
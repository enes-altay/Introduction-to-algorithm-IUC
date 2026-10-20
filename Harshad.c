#include <stdio.h>

int main(){

    int number;
    int toplam = 0;
    int f;

    printf("Sayi giriniz:");
    scanf("%d",&number);

    int gecici;
    number = gecici;

    while(1){
        if(gecici == 0){
            break;
        }
        f = gecici % 10;
        toplam = toplam + f;
        geciic = gecici / 10;

    }
    if(number % toplam == 0){
        printf("Harshad sayisidir.");
    }
    else{
        printf("Harshad sayisi değildir.");
    }


    return 0;
}
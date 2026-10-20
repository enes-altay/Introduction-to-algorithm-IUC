#include <stdio.h>

int main(){

    int sayi;
    int gecici;
    int basamak=0;
    int sayac;


    printf("En az 3 basamaklı bir sayi giriniz: ");
    scanf("%d",&sayi);

    while(1){
    if(sayi < 100){
        printf("Lütfen geçerli bi sayı giriniz:");
        scanf("%d",&sayi);
    }
    else{
        break;
    }
}

    while(sayi>0){
        if((sayi % 10) > 0){
            basamak++;
            sayi / 10;
        }
        else{
            break;
        }
    }
    basamak++;

    int max = sayi % 10;
    int a = sayi;
    while(sayi>0){
        
        gecici = a % 10;
        a = a/10;

        if(gecici > max){
            max = gecici;
        }
    }

    return 0;
}

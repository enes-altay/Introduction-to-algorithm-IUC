#include <stdio.h>


int main(){

    int sayi1,sayi2;
    int ebob = 1;
    int ekok=0;
    int buyuk;

    printf("1. Sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("2. Sayiyi giriniz: ");
    scanf("%d",&sayi2);

    if(sayi1>sayi2){
        buyuk = sayi1;
    }else{
        buyuk = sayi2;
    }


    for(int i=2; i<=sayi1 && i<=sayi2 ;i++){
        if((sayi1 % i == 0) && (sayi2 % i == 0)){
            ebob = i;
        }
    }

    for(int i=buyuk ; i ; i++){
        if((i % sayi1 == 0) && (i % sayi2 == 0)){
            ekok = i;
            break;
        }
    }

    printf("EBOB: %d\n",ebob);
    printf("EKOK: %d\n",ekok);

    return 0;
}
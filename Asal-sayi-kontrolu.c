#include <stdio.h>

int main(){
    int number;
    int asalMi;

    printf("Enter a number:");
    scanf("%d",&number);

    if(number <= 2){
        printf("Sayi asaldır.\n");
    }

    for(int i=2;i<number;i++){
        if(number % i == 0){
            asalMi = 0;
            break;
        }
            else{
                asalMi = 1;
        }
    }
    
    if(asalMi == 1){
        printf("Sayi asaldir. ");
    }
    else if(asalMi == 0){
        printf("Sayi asal değildir.");
    }

    return 0;
}
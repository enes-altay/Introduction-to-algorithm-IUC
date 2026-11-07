#include <stdio.h>

int main(){

    int i,number;
    int faktoriyel=1;

    printf("Faktoriyeli alinacak sayiyi giriniz: ");
    scanf("%d",&number);

    for(int i=1;i<= number ;i++){
        faktoriyel = faktoriyel * i;
    }

    printf("Sayinin faktoriyeli: %d\n",faktoriyel);

    return 0;
}
#include <stdio.h>

int main(){

    int choice;

    while(1){
        printf("=== Number Theory Toolkit ===\n1. Prime classification\n2. Perfect number check\n3. Palindrome check\n4. Collatz sequence\n0. Exit\nChoice: ");
        scanf("%d", &choice);

        if(choice == 0){
            printf("Goodbye!\n");
            return 0;
        }

        else if((choice < 0) || (choice > 4) ){
            continue;
        }

        switch(choice){
            case 1:
                int number;
                int asal;

                printf("Enter a number (1-100000): ");
                scanf("%d", &number);

                if(number == 1){
                    printf("Prime: NEITHER\n");
                    continue;
                }

                else if(number == 2){
                    printf("Prime: PRIME\n");
                    continue;
                }

                for(int i=2 ; i<number ; i++){
                    if(((number) % i) == 0){
                        asal = 0;
                        break;
                    }
                    else{
                        asal = 1;
                    }
                }

                if(asal == 0){
                    printf("Prime: COMPOSITE\n");
                }
                else if(asal == 1){
                    printf("Prime: PRIME\n");
                }

                continue;

            case 2:
                int a;
                int sum = 0;

                printf("Enter a number (1-100000): ");
                scanf("%d",&a);

                for(int i=1 ; i < a ; i++){
                    if(a % i == 0){
                        sum = sum + i;
                    }
                }

                if(a == sum){
                    printf("Perfect: PERFECT\n");
                }
                else{
                    printf("Perfect: NOT PERFECT\n");
                }

                continue;

            case 3:
                int b;
                int ters = 0;
                int gecici;

                printf("Enter a number (1-100000): ");
                scanf("%d" ,&b);

                gecici = b;

                while(gecici > 0){
                    ters = (ters * 10) + (gecici % 10);
                    gecici /= 10;    
                }

                if(ters == b){
                    printf("Palindrome: PALINDROME\n");
                }
                else{
                    printf("Palindrome: NOT PALINDROME\n");
                }

                continue;

            case 4:
                int c;

                printf("Enter a number (1-100000): ");
                scanf("%d",&c);
                printf("Collatz: %d",c);

                while(c != 1){
                    if(c % 2 == 0){
                        c /= 2;
                        printf(" %d",c);
                    }
                    else{
                        c = (3*c) + 1;
                        printf(" %d",c);
                    }
                }
                if(c==1){
                    printf("\n");
                }

                continue;
        }
    }

    return 0;
}

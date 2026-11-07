#include <stdio.h>

float usAlma(int x,int y);

int main(){

    printf("%f",usAlma(3,3));


    return 0;

}

float usAlma(int x,int y){
    float result = 1;

    if(y<0){
        for(int i=0; i < -y ;i++){
            result *= 1/x;
        }
    }
    else{
        for(int i=0; i < y ;i++){
            result *= x;
        }
    }  

    return result;
}
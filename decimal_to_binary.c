#include <stdio.h>

int main(){
    int decimal=125, i=0, reverse_bin[100];

    while(decimal > 0){
        reverse_bin[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        printf("%d", reverse_bin[j]);
    }
    
}
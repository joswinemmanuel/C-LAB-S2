#include <stdio.h>

//to convert binary to decimal number
int main(){
    int binary,bin,base=1,deci=0;
    printf("Enter the binary to be converted to decimal : ");
    scanf("%d",&binary);
    bin=binary;
    while(bin!=0){
        deci+=base*(bin%10);
        base*=2;
        bin/=10;
    }
    printf("Binary %d can be represented in decimal as %d",binary,deci);
}

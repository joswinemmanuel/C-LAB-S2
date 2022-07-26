#include <stdio.h>

int main(){
    int a = 10, b;
    b = a++;
    printf("%d ", b);
    b = ++a;
    printf("%d ", b);
    return 0;
    //10 12
}
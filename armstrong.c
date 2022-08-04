#include <stdio.h>
#include <math.h>

//to check if the number is armstrong or not
int main(){
    int num,p,count=0,sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);

    p=num;
    while(p!=0){
        p/=10;
        count++;
    }

    p=num;
    while(p!=0){
        sum+=pow(p%10,count);
        p/=10;
    }

    if(sum==num){
        printf("%d is an armstrong number",num);
    } else{
        printf("%d is not an armstrong number",num);
    }

    return 0;
}

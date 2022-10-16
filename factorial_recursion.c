#include <stdio.h>

int fact(int n); //declaration

int main(){
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	printf("Factorial of number is : %d",fact(number));
	return 0;
}

int fact(int n){
	if(n<=1)
		return 1;
	else
		return n*fact(n-1);
}



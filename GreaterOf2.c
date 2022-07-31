#include <stdio.h>

// https://www.instagram.com/p/CeUF7OUNI8V/

//to find greatest of two numbers 
int main(){
	int num1,num2;
	printf("This is a program to find the greater of the two numbers\n");
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	if(num1>num2){
		printf("%d is greater",num1);
	} else {
		printf("%d is greater",num2);
	}
	return 0;
}

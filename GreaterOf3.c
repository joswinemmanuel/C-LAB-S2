// This is a program to find the greater of the two numbers

#include <stdio.h>

int main(){
	int num1,num2,num3;
	printf("This is a program to find the greater of the two numbers\n");
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	printf("Enter the third number:");
	scanf("%d",&num3);
	if(num1>num2 & num1>num3){
		printf("%d is greater of the three",num1);
	} else if(num2>num3){
		printf("%d is greater of the three",num2);
	} else{
		printf("%d is greater of the three",num3);
	}
	return 0;
}

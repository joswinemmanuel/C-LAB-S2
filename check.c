#include <stdio.h>

int main(){
	int num;
	printf("This is a program to check if a number is less than 100 or not\n");
	printf("Enter the number:");
	scanf("%d",&num);
	if(num<100){
		printf("%d is less than 100",num);
	} else if(num==100) {
		printf("%d is equal to 100",num);
	} else {
		printf("%d is greater than 100",num);
	}
	return 0;
}

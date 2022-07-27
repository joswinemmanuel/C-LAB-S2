#include <stdio.h>

int main(){
	int num,flag=1;
	printf("This is a program to check if a number is prime of not\n");
	printf("Enter the number:");
	scanf("%d",&num);
	for(int i=2;i<num;i++){
		if(num%i==0){
			flag=0;
                        break;
		}
	}
	if(flag==0){
		printf("%d is not prime",num);
	} else {
		printf("%d is prime",num);
	}
	return 0;
}

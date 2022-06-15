#include <stdio.h>

int main(){
	int fact=1,num;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		fact*=i;
	}
	printf("Factorial is : %d",fact);
}

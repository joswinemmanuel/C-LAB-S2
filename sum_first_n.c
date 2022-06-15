#include <stdio.h>

int main(){
	int n,sum=0,num;
	printf("Enter the limit : ");
	scanf("%d",&n);
	num=n;
	while(n!=0){
		sum+=n;
		n--;
	}
	printf("THE SUM OF FIRST %d number is : %d",num,sum);
} 	

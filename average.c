#include <stdio.h>

int main(){
	int n,sum=0,val;
	printf("Enter how many number you want to average: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter number %d: ",i+1);
		scanf("%d",&val);
		sum+=val;	
	}
	printf("The average is:%d",(float)sum/n);
	return 0;
}

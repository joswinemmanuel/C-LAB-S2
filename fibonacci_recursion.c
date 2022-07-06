#include <stdio.h>

int rec_fib(int n);

int main(){
	int limit;
	printf("Enter the limit : ");
	scanf("%d", &limit);
	for(int i=0;i<=limit;i++){
		printf("%d\n", rec_fib(i));
	}
	return 0;
}

int rec_fib(int n){
	if(n<=1)
		return n;
	else
		return rec_fib(n-1) + rec_fib(n-2);
}

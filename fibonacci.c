#include <stdio.h>
// Fibonacci
int main(){
	int a=0,b=1,c,limit;
	printf("Enter the limit : ");
	scanf("%d", &limit);
	
	for(int i=0;i<limit;i++){
		c = a + b;
		printf("%d\n", a);
		a = b;
		b = c;
	}
}

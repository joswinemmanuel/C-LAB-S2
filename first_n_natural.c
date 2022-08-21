#include <stdio.h>
// To print first n natural numbers
int main(){
	int n;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("%d\n",i);
	}
}

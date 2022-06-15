#include <stdio.h>

int main(){
	int n,ans=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n!=0){
		ans=ans*10+n%10;
		n=n/10;
	}
	printf("%d",ans);
}

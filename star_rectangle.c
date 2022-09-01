#include <stdio.h>
//To make a rectangle
int main(){
	int length,breadth;
	printf("Enter the length of the rectangle:");
	scanf("%d",&length);
	printf("Enter the breadth of the rectangle:");
	scanf("%d",&breadth);
	for(int i=1;i<=length;i++){
		for(int j=1;j<=breadth;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

void add_value(int *num1, int *num2);

int main(){
	int a=10, b=90;
	printf("A is %d , B is %d\n", a, b);
	add_value(&a, &b);
	printf("A + B is : %d", a);
	return 0;
}

void add_value(int *num1, int *num2){
	*num1 = *num1 + *num2;
}

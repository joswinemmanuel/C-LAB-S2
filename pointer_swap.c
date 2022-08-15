#include <stdio.h>
//Swapping using pointers
void swap_variable(int *num1, int *num2);

int main(){
	int a=10, b=99;
	printf("BEFORE SWAPPING\n");
	printf("A is %d & B is %d\n", a, b);
	swap_variable(&a, &b);
	printf("AFTER SWAPPING\n");
	printf("A is %d & B is %d\n", a, b);
	return 0;
}

void swap_variable(int *num1, int *num2){
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

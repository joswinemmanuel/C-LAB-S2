#include <stdio.h>
//Pointer example
int main(){
	int data=20, *p, carrier;  // declaring a pointer
	p = &data;                 // initializing a pointer by giving the passing the address of data
	carrier = *p;              // dereferencing the value in the pointer a assigning it to carrier variable
	printf("%d", carrier);
	return 0;
}
	

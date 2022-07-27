#include <stdio.h>

int main(){
    int arr[]={6,3,5,2,1,9},len,min=arr[0];    
    len=sizeof(arr)/sizeof(int);
    
    for(int i=1;i<len;i++){
	if(arr[i]<min){
		min=arr[i];
	}
    }
    
    printf("The min element in the array is : %d",min);
    return 0;
}

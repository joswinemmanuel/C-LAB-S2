#include <stdio.h>
// Largest
int main(){
    int arr[]={6,3,5,2,1,9},len,max=arr[0];    
    len=sizeof(arr)/sizeof(int);
    
    for(int i=1;i<len;i++){
	if(arr[i]>max){
		max=arr[i];
	}
    }
    
    printf("The max element in the array is : %d",max);
    return 0;
}

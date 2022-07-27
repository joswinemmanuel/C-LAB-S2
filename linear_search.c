#include <stdio.h>

int main(){
	int len,index,found=0,n;
	printf("Enter the length of the array : ");
	scanf("%d",&len);
	int arr[len];
	
	printf("Enter %d numbers : ",len);
	for(int i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter the number to find the index of : ");
	scanf("%d",&n);
	
	for(int i=0;i<len;i++){
		if(arr[i]==n){
			found=1;
			index=i;
                        break;
		}
	}
	
	if(found){
		printf("%d found at index : %d",n,index);
	} else{
		printf("%d not found in array",n);
	}
	
}

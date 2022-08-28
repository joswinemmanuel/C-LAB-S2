#include <stdio.h>

int main(){
    int arr[100], n;
    printf("Enter the length of the array : ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Enter the value of element %d : ", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        	int flag=1;
            for(int i=2; i<arr[i]; i++){
                if(arr[i] % i==0){
                    flag=0;
                    break;
                }
            }
            if(flag==0){
                printf("%d is not prime",arr[i]);
            } else {
                printf("%d is prime",arr[i]);
            }
            return 0;
    }
}

/*
Enter the length of the array : 5
Enter the value of element 0 : 1
Enter the value of element 1 : 2
Enter the value of element 2 : 3
Enter the value of element 3 : 4
Enter the value of element 4 : 5
1 is prime
*/
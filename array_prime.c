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
        printf("%d\n", arr[i]);
    }

}

/*
Enter the value of element 0 : 1
Enter the value of element 1 : 2
Enter the value of element 2 : 3
Enter the value of element 3 : 4
Enter the value of element 4 : 5
1
2
3
4
5
*/
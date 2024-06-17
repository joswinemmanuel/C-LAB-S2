#include <stdio.h>

int isPrime(int n) {
    if(n <= 1)
        return 0;

    for(int i=2; i<n; i++) {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int A[20], n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("Enter the element : ");
        scanf("%d", &A[i]);
    }

    printf("The Prime numbers are : ");
    for(int i=0; i<n; i++) {
        if(isPrime(A[i]))
            printf("%d ", A[i]);
    }
}

/*
Enter the number of elements : 5
Enter the element : 2
Enter the element : 8
Enter the element : 11
Enter the element : 4
Enter the element : 7
The Prime numbers are : 2 11 7
*/

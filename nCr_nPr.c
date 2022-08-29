#include<stdio.h>
int fact(int n)
{
    if(n <= 0)
        return 1;
    else
        return n * fact(n-1);
}

// no. of permutation = n! / (n-r)!
// no. of combination = n! / (r! * (n-r)!)

void main()
{
    int n,r;
    float C,P;
    printf("Enter the numbers:");
    scanf("%d%d",&n,&r);
    P = (float)fact(n) / fact(n-r);
    C = (float)fact(n) / (fact(r) * fact(n-r));
    printf("nCr=%f\n",C);
    printf("nPr=%f",P);
}

/*
Enter the numbers:5 3
nCr=10.000000
nPr=60.000000
*/
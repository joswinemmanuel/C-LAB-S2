#include <stdio.h>

int sod(int n)
{
    if(n<=0)
        return 0;
    else
        return n%10 + sod(n/10);
}
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Sum=%d",sod(n));
}

#include<stdio.h>
int main()
{
    int n,rem=0,rev=0,b;
    printf("Enter a number:");
    scanf("%d",&n);
    b=n;
    while(n!=0)
    {
        rem = n % 10;
        rev = rev *10 + rem;
        n = n/10;
    }
    printf("The number of %d in reverse oder in %d",b,rev);
    return 0;
}
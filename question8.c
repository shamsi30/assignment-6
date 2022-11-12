#include<stdio.h>
int main()
{
    int n,x=1;
    printf("enter any number:");
    scanf("%d",&n);
    {
        if(n%2==0 || n%n-1==0)
            printf("%d is not prime number",n);
        else
            printf("%d is a prime number",n);
    }
    return 0;
}
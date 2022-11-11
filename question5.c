#include<stdio.h>
int main()
{
    int x,n,sum=0;
    printf("enter any number:");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        sum+=x*x*x;
    }
    printf("sum of cubes of first %d natural numbers are %d",n,sum);
    return 0;
}
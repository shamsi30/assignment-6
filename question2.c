#include<stdio.h>
int main()
{
    int x,n,sum=0;
    printf("enter any number:");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        if(x%2==0)
            sum+=x;      
    }
    printf("sum of first %d even natural numbers is %d",n,sum);
    return 0;
}
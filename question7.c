#include<stdio.h>
int main()
{
    int x,a=0,b;
    printf("Enter a number : ");
    scanf("%d",&x);
    b=x;
    while(x!=0)
    {
        x=x/10;
        a++;
    }
         printf("Total digits in %d is %d",b,a);
    return 0;
}
#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
         break;   
    }
    printf("The LCM of %d and %d is %d",x,y,i);
    return 0;
}
#include <stdio.h>
int main()
{
int n,factor;
printf("Enter a number:");
scanf("%d",&n);
printf("Factors are:\n");
for(int i=1;i<=n;i++)
{
    if(n%i==0)
    {
        printf(" %d",i);
    }
}
    return 0;
}
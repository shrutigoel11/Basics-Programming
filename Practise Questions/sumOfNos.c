#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter a natural number upto which you want to find the sum:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    sum+=i;
    }
    printf("Sum is :%d",sum);


    return 0;
}
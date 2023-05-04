#include <stdio.h>
int Armstrong(int num)
{
    int digit,ans=0,n;
    n=num;
    while(n!=0)
    {
        digit=n%10;
        ans+=digit*digit*digit;
        n=n/10;
    }
        if(ans==num)
        return 1 ;
        else
        return 0;
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(1==Armstrong(num))
    printf("Number is Armstrong\n");
    else
    printf("Number is not Armstrong");
    return 0;
}
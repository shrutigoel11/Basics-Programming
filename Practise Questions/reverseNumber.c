#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int digit,rev=0;
    while(n!=0)
    {
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    printf("Reverse is: %d",rev);


    return 0;
}
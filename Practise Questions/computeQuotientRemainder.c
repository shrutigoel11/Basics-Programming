#include <stdio.h>

int main()
{
    int divisor,divident,q,r;
    printf("Enter two numbers:");
    scanf("%d %d",&divident,&divisor);
    q=divident/divisor;
    r=divident%divisor;
    printf("Quotient is : %d\nRemainder is : %d",q,r);

    return 0;
}
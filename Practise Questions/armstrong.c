#include <stdio.h>
/**/
int main()
{
int orignal,digit,n,answer=0 ;                                                                       
printf("Enter a number :");
scanf("%d",&n);
orignal=n;
//Armstrong is a number whose sum of digits =number
while(n!=0)//check whether the number entered is non-zero
{
digit=n%10;
answer+=digit*digit*digit;
n=n/10;
}
if(orignal==answer)
{
    printf("Number is Armstrong");
}
else
{
    printf("Number is not Armstrong");
}

    return 0;
}
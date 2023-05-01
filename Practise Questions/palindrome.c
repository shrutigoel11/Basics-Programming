#include <stdio.h>
int main()
{
int digit,rev=0,n,orignal;
printf("Enter a number :");
scanf("%d",&n);
orignal=n;
/* Palindrome is a number whose reverse is number itself---->aba =reverse=aba where a ,b are any integer*/
while(n!=0)//check whether the number entered is non-zero
{   
digit=n%10;
rev=(rev*10)+digit;
n=n/10;
}
printf("Orignal:%d\nReversed:%d\n",orignal,rev);
if(orignal==rev)
{
    printf("%d is Palindrome",orignal);
}
else
{
    printf("%d is not Palindrome",rev);
}
    return 0;
}
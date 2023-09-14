#include <stdio.h>
int AddNos(int n);

int main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
printf("Sum is: %d",AddNos(num));
return 0;
}
int AddNos(int n)
{
    if(n!=0)
    return n+AddNos(n-1);
    else 
    return n;
}
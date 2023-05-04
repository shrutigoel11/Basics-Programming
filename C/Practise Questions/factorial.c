#include <stdio.h>
int main()
{
int n,factorial=1;
printf("Enter a number:");
scanf("%d",&n);
//loops are used to iterate till condition is satisfied
for(int i=1;i<=n;i++)
{
    factorial*=i;
//fatorial-->1*2*3.....(n-1)*n
}
printf("Factorial is: %d",factorial);
return 0;
}
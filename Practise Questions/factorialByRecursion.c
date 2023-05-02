#include <stdio.h>
int Factorial(int n);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Factorial is: %d",Factorial(num));
    return 0;
}
int Factorial(int n)
{
    if(n>=1)
    return n*Factorial(n-1);
    else 
    return 1;
}

#include <stdio.h>
int main() 
{
    int a,b,gcd,lcm;
    //taking two numbers from user
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    //checking gcd--->greatest common divisor 
    for(int i=1; i<=a && i<=b; i++)
    {
        //checking if i is a factor of both a and b
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("GCD od %d and %d is: %d\n",a,b,gcd);
    lcm=(a*b)/gcd;
    printf("LCM is: %d",lcm);

  return 0;
}
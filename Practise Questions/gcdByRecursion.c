#include <stdio.h>
int Gcd(int a,int b);

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("GCD is: %d",Gcd(a,b));
    return 0;
}
int Gcd(int a,int b)
{
        if(b!=0)
        return Gcd(b,a%b);
        else 
        return a;
    
}
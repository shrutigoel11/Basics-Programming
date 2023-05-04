#include <stdio.h>
int Power(int n,int pow);

int main()
{
int num,power;
printf("Enter a number:\n");
scanf("%d",&num);
printf("Enter the power:\n");
scanf("%d",&power);
int result =Power(num,power);
printf("Answer is: %d",result);

    return 0;
}
int Power(int n,int pow)
{
    int answer=1;
   if(pow!=0)
    {
     return n*Power(n,(pow-1));  
    }
    else
    return 1;
}
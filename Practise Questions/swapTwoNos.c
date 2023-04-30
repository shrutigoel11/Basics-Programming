#include <stdio.h>
int main() 
{
   int t,a,b;
   //Prompt the user
   printf("Enter two numbers:");
   scanf("%d %d",&a,&b);
   //Before swaping
   printf("Before swapping:\na=%d\nb=%d\n",a,b);
   t=a;
   a=b;
   b=t;
   //After swapping
   printf("After swapping:\na=%d\nb=%d",a,b);
    return 0;
}
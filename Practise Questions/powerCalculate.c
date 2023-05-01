#include <stdio.h>
int main()
{
int base,exponent,answer=1;
printf("Enter the base : ");
scanf("%d",&base);
printf("Enter the power base is raised to : ");
scanf("%d",&exponent);
while(exponent!=0)
{
    answer=answer*base;
    exponent--;
}
printf("Answer is : %d ",answer);


    return 0;
}
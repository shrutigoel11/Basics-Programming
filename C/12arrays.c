#include <stdio.h>
#include <stdlib.h>

int main()
{
   int luckyNumbers[] = { 4 , 5 , 6};
   printf("%d\n" , luckyNumbers[0]);
   luckyNumbers[2] = 8; //You can update the values also
   printf("%d\n" , luckyNumbers[2]);
   // printf("%d" , sizeof(luckyNumbers));
   return 0;
}
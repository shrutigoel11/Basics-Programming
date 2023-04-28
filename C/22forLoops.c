#include <stdio.h>

int main()
{
// for(int i= ; i>0;  i--)            //PRINTING REVERSE COUNTING USING FOR LOOP
// {
//     printf("%d\n" , i);
// }

int luckyNumbers[] = { 10 , 20 , 44 , 60 , 70 }; //An array

for(int i = 0 ; i< 5  ; i++)
{
    printf("%d\n" , luckyNumbers[i]);
}


return 0;
}
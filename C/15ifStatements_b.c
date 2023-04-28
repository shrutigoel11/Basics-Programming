#include <stdio.h>

int max(int num1, int num2 , int num3)
{
    int result;
    if(num1>=num2 && num1>=num3)
    {
    result = num1;
    }
    else if (num2>=num1 && num2>=num3)
    {
        result = num2;
    }
    else
    {
    result = num3;
    }
return result;
}

int main(){

printf("Result is : %d ", max(3,6,9));   //other operators are ==,||,!=, !

    return 0;
}
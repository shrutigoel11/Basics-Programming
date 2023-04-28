#include <stdio.h>

void primeOrComposite(int num)
{
    if (num <= 1)
    {
        printf("The number is neither prime nor composite");
    }
    else
    {
        int count = 0;
        for (int i = 2; i < num; i++)
        {
            if(num%i ==0){
            count ++;
            break;
            }
            
        }
        count == 0 ? printf("The number is prime") : printf("The number is composite");
    }
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // To check a number is prime or composite
    primeOrComposite(n);

    return 0;
}
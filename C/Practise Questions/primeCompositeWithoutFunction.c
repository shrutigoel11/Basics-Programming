#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("The number is neither composite nor prime");
    }
    else
    {
        int count = 0;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        count == 0 ? printf("The number is Prime") : printf("The number is composite");
    }

    return 0;
}
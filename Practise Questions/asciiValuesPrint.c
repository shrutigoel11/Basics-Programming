#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character:");
    //Entering any upper or lower case alphabet provides the ASCII values
    scanf("%c",&c);
    printf("ASCII value of %c: %d",c,c);
    return 0;
}
#include <stdio.h>

int main()
{
char grade = 'B';

switch(grade)
{
    case 'A':
            printf("You did a great job!");
            break;

    case 'B':
            printf("You did poorly:(");  
            break;

    default:
            printf("INVALID INPUT");

}
    return 0;
}
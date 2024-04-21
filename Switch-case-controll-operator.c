#include <stdio.h>
int main()
{
    char day;
    printf("Which day is today : ");
    scanf(" %c", day); // Use space before %c to avoid newline character issues

    switch(day)
    {
    case'm':
    printf("Today is english class");
    break;

    case't':
    printf("Today is math class");
    break;

    case'w':
    printf("Today is chemistry class");
    break;

    case'h':
    printf("Today is physics class");
    break;

    case'f':
    printf("Today is biology class");
    break;

    case's':
    printf("Today is urdu class");
    break;

    case's':
    printf("Today is holiday");
    break;
    
    default:
    printf("Please enter a valid day");
    }
    return 0;
}
//  %c for characters %d for numbers %f for integers 
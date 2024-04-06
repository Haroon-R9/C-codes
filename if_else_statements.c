#include<stdio.h>
int main()
{
    int a;
    printf("Enter you age: ");
    scanf("%d", &a);

    if (a>18)
        {
            printf("You can drive ");
        }
    else
        {
            printf("You can't drive ");
        }
    return 0;
}
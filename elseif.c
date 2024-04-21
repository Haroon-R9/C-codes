#include <stdio.h>
int main()
{
    int a;
    printf("Enter your age ");
    scanf("%d", &a);
                //checking ages of childrens that are eligible to drive
    if (a>18)
    {
    printf("You can drive ");
    }

    else if (a>14 && a<18)
    {
    printf("You cant drive a vehicle but you can drive a toy car ");
    }
    else  {
        printf("you cant drive any cars in this park ");
    }

    return 0;
}
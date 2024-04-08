#include <stdio.h>
int main()
{
    int a , b ,c;
    printf("enter a:");
    scanf("%d", & a);

    printf("enter b:\n");
    scanf("%d", &b);
     
    printf("enter c:\n");
    scanf("%d", &c);

    if (a<5 || b>10 && c!= 10 ){
        printf("statement is true ");
    }
    else {
     printf("your statement is false");
    }

    return 0;

    }

            /* 
            && (AND logic ) is  when both condition is true
            1 1 = true
            1 0 = false
            0 1 = false
            0 0 = false

            || (OR) is true when one condition is true at least
            1 1 = true
            1 0 = true
            0 1 = true
            0 0 = false

            ! (NOT) returns true when statement is false, returns false when statement is true
            (5==5) false
             (4==5) true */


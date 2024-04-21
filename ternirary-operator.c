#include <stdio.h>
int main()
{
   int b=3;
    int c=4;
    int a= (b==c)? 2:4;
    printf("The value of a is %d", a );

    return 0;
}
/*int a= (b==c)? 2:4; if the statement is true (2:4) value of left value (2) will be assign
 if false (not equall) right (4) will assign 
 (?) shows ternirary*/
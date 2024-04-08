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

    if (a<5 && b>10 || c!= 10 ){
        printf("statement is true ");
    }
    else {
     printf("your statement is false");
    }

    return 0;
     

    }



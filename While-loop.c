#include <stdio.h>
int main()
{
    int i =0;
    while (i<25)
    {
        printf("the value of i is %d\n", i);
        i++; // the value of i  increments untill 25
        // if you remove i++ or i=i+1 or i += 1 the loop keeps going 
        // you can either decrement value by i--
        
    }
    return 0;
    
}
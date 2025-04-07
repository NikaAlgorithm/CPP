#include <stdio.h>

//Below function retturns num to power of an arbitrary number
//Final number assigns to value(It's a variable)
int PowerFunction(int num, int power) 
{
    int value = 1;
    for(int i = 0;i < power; i++ )
    {
        value = value * num;
    }
    return value;
}


int main(void)
{
    int result = PowerFunction(12,2);
    printf("%d \n", result);
}

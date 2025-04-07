#include <stdio.h>



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
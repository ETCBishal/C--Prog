/*
by Bishal jaiswal

No library used,
        This program will takes two arguments form the user one is the number and the exponent of that number
        and finally calculate the result.

*/

#include <stdio.h>

int power(int num,int power)
{
    int square = 1;
    if (power == 0)
    {
        if (num == 0)
        {
            printf("Math error !");
        }
        
        return 1;
    }

    else
    {    
        for (int i = 0; i <power; i++)
        {
            square = square*num;
        }
    }
    
        
    return square;
}

int main()
{

    int num,pow;
    
    printf("Entre any number\n> ");
    scanf("%d",&num);
    printf("Enter the power of that number\n> ");
    scanf("%d",&pow);

    printf("%d",power(num,pow));

    return 0;
}
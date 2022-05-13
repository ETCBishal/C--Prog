/**************************************
Author : Bishal jasiwal
Purpose : practice program
Name : commandlineCalculator
***************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    if (strcmp(operation, "add") == 0)
    {
        printf("The sum is : %d", num1 + num2);
    }

    else if (strcmp(operation, "subtract") == 0)
    {
        printf("The difference is : %d", num1 - num2);
    }

    else if (strcmp(operation, "multiply") == 0)
    {
        printf("The multiplication is : %d", num1 * num2);
    }

    else if (strcmp(operation, "divide") == 0)
    {
        printf("The division is : %d", num1 / num2);
    }

    return 0;
}

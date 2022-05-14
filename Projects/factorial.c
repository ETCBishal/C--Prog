#include <stdio.h>

int fac(int n)
{
    int val = 1;
    for (int i = n; i >1; i--)
    {
        val*=i;
    }
    return val;   
}

int main()
{

    int num;
    printf("Enter the number you want factorial of\n> ");
    scanf("%d",&num);

    if (num>0)
    {
        printf("The factorial of %d is : %d",num,fac(num));
            
    }

    else
    {
        printf("The factorial of %d can't be calculated.",num);
    }
       

    return 0;
}
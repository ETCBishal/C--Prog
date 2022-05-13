#include <stdio.h>

int main()
{

    int tab;
    printf("Enter the number of which you want table\n> ");
    scanf("%d",&tab);

    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n",tab,i,tab*i);
    }
    
    
    return 0;
}
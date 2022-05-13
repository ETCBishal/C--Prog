#include <stdio.h>
#include <math.h>

const float PI = 3.14;

float Edistance(int x1, int y1, int x2, int y2)
{
    float distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return distance;
}

float areaOfCircle(int distance)
{
    float area = PI*(pow(distance,2));
    return area;
}

int main()
{

    int x1,y1,x2,y2;
    printf("Enter the values of x1\n> ");
    scanf("%d",&x1);

    printf("Enter the values of y1\n> ");
    scanf("%d",&y1);

    printf("Enter the values of x2\n> ");
    scanf("%d",&x2);

    printf("Enter the values of y2\n> ");
    scanf("%d",&y2);

    int (* fptr)(int,int,int,int);
    fptr = &Edistance;
    flaot distance = (*fptr)(x1,y1,x2,y2); 
    printf("The distance is : %.2f",distance);

    printf("\nThe area of the circle is : %.2f",areaOfCircle(distance));
 

    return 0;
}

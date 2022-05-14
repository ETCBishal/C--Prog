/*
Author : Bishal jaiswal
purpose : Practice
*/

#include <stdio.h>
#include <string.h>

int max(int array[],int arr_len)
{
    int maxValue = 0;
    for (int i = 0; i < arr_len; i++)
    {
        if (array[i]>maxValue)  // Iterating all the elements and checking if element is greater than maxValue or not if 
                                    // the condition is True then,""
        {
            maxValue=array[i];  // gonne store the value int maxValue
        }
        
    }
    
    return maxValue;
}

int main()
{

    int arr[] = {2,56,36,565,12,6540,356,155555};
    
    int maxVal = max(arr,8);
    printf("The maximum value in this array is : %d",maxVal);

    return 0;
}
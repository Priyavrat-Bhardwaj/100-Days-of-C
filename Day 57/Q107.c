/*
Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/

#include <stdio.h>

int main()
{
    int a[100],n,i,j,previous;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        previous=-1;
        for(j=i-1; j>=0; j--)
            if(a[j]>a[i])
        {
            previous=a[j];
            break;
        }
        printf("%d",previous);
        if(i<n-1)
            printf(", ");
    }
    return 0;
}

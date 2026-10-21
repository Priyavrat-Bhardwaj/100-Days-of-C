/*
Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
*/

#include <stdio.h>

int main()
{
    int a[100],n,k,i,j,max;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter k: ");
    scanf("%d",&k);
    for(i=0; i<=n-k; i++)
    {
        max=a[i];
        for(j=i+1; j<i+k; j++)
            if(a[j]>max)
                max=a[j];
        printf("%d",max);
        if(i<n-k)
            printf(" ");
    }
    return 0;
}

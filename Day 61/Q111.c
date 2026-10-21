/*
Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
*/

#include <stdio.h>

int main()
{
    int a[100],n,k,i,j,negative;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter k: ");
    scanf("%d",&k);
    for(i=0; i<=n-k; i++)
    {
        negative=0;
        for(j=i; j<i+k; j++)
            if(a[j]<0)
        {
            negative=a[j];
            break;
        }
        printf("%d",negative);
        if(i<n-k)
            printf(" ");
    }
    return 0;
}

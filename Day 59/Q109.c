/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
*/

#include <stdio.h>

int main()
{
    int a[100],n,k,i,j,sum,max;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter k: ");
    scanf("%d",&k);
    for(i=0; i<=n-k; i++)
    {
        sum=0;
        for(j=i; j<i+k; j++)
            sum+=a[j];
        if(i==0||sum>max)
            max=sum;
    }
    printf("%d",max);
    return 0;
}

/*
Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/

#include <stdio.h>

int main()
{
    int a[100],ans[100],n,i,j;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        ans[i]=1;
        for(j=0; j<n; j++)
            if(i!=j)
                ans[i]*=a[j];
    }
    printf("[");
    for(i=0; i<n; i++)
    {
        printf("%d",ans[i]);
        if(i<n-1)
            printf(",");
    }
    printf("]");
    return 0;
}

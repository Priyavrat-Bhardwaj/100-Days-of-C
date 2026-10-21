/*
Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
*/

#include <stdio.h>

int main()
{
    int a[100],n,i,j,count;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        count=0;
        for(j=0; j<n; j++)
            if(a[i]==a[j])
                count++;
        if(count>n/2)
        {
            printf("%d",a[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}

/*
Q60: Count positive, negative, and zero elements in an array.
*/

#include <stdio.h>

int main()
{
    int a[100],n,i,p=0,neg=0,z=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
            p++;
        else if(a[i]<0)neg++;
        else z++;
    }
    printf("Positive=%d, Negative=%d, Zero=%d",p,neg,z);
    return 0;
}

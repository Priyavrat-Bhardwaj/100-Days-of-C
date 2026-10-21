/*
Q69: Find the second largest element in an array.
*/

#include <stdio.h>

int main()
{
    int a[100],n,i,j,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(a[i]<a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=1; i<n; i++)
        if(a[i]!=a[0])
    {
        printf("%d",a[i]);
        return 0;
    }
    printf("No second largest element");
    return 0;
}

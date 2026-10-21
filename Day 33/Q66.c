/*
Q66: Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

int main()
{
    int a[100],n,i,e,pos;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter sorted array elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter element to insert: ");
    scanf("%d",&e);
    pos=n;
    for(i=0; i<n; i++)
        if(e<a[i])
    {
        pos=i;
        break;
    }
    for(i=n; i>pos; i--)
        a[i]=a[i-1];
    a[pos]=e;
    n++;
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}

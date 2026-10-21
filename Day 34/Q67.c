/*
Q67: Insert an element in an array at a given position.
*/

#include <stdio.h>

int main()
{
    int a[100],n,i,pos,e;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter position (0-based) and element: ");
    scanf("%d %d",&pos,&e);
    for(i=n; i>pos; i--)
        a[i]=a[i-1];
    a[pos]=e;
    n++;
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}

/*
Q68: Delete an element from an array.
*/

#include <stdio.h>

int main()
{
    int a[100],n,i,pos;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter position to delete (0-based): ");
    scanf("%d",&pos);
    for(i=pos; i<n-1; i++)
        a[i]=a[i+1];
    n--;
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}

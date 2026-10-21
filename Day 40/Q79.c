/*
Q79: Perform diagonal traversal of a matrix.
*/

#include <stdio.h>

int main()
{
    int a[10][10],r,c,i,j,s;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter matrix elements:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d",&a[i][j]);
    for(s=0; s<r+c-1; s++)
    {
        if(s%2==0)
        {
            for(i=r-1; i>=0; i--)
            {
                j=s-i;
                if(j>=0&&j<c)
                    printf("%d ",a[i][j]);
            }
        }
        else
        {
            for(i=0; i<r; i++)
            {
                j=s-i;
                if(j>=0&&j<c)
                    printf("%d ",a[i][j]);
            }
        }
    }
    return 0;
}

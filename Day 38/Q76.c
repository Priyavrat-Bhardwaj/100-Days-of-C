/*
Q76: Check if a matrix is symmetric.
*/

#include <stdio.h>

int main()
{
    int a[10][10],r,c,i,j,s=1;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter matrix elements:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d",&a[i][j]);
    if(r!=c)
        s=0;
    else for(i=0; i<r; i++)for(j=0; j<c; j++)if(a[i][j]!=a[j][i])s=0;
    if(s)
        printf("True");
    else printf("False");
    return 0;
}

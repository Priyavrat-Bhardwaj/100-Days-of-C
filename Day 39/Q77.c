/*
Q77: Check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>

int main()
{
    int a[10][10], rows, columns, i, j, limit, distinct = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
            scanf("%d", &a[i][j]);
    }
    if (rows < columns)
        limit = rows;
    else limit = columns;
    for (i = 0; i < limit; i++)
    {
        for (j = i + 1; j < limit; j++)
        {
            if (a[i][i] == a[j][j])
                distinct = 0;
        }
    }
    if (distinct == 1)
        printf("True");
    else printf("False");
    return 0;
}

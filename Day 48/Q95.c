/*
Q95: Check if one string is a rotation of another.
*/

#include <stdio.h>

int main()
{
    char a[100],b[100];
    int l1=0,l2=0,i,j,rot=0;
    printf("Enter first string: ");
    scanf("%s",a);
    printf("Enter second string: ");
    scanf("%s",b);
    while(a[l1]!=0)
        l1++;
    while(b[l2]!=0)
        l2++;
    if(l1==l2)
    {
        for(i=0; i<l1; i++)
        {
            for(j=0; j<l1; j++)
                if(a[(i+j)%l1]!=b[j])
                    break;
            if(j==l1)
            {
                rot=1;
                break;
            }
        }
    }
    if(rot)
        printf("Rotation");
    else printf("Not rotation");
    return 0;
}

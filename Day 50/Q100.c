/*
Q100: Print all sub-strings of a string.
*/

#include <stdio.h>

int main()
{
    char s[100];
    int i,j,k,len=0,first=1;
    printf("Enter a string: ");
    scanf("%s",s);
    while(s[len]!=0)
        len++;
    for(i=0; i<len; i++)
        for(j=i; j<len; j++)
    {
        if(!first)
            printf(",");
        for(k=i; k<=j; k++)
            printf("%c",s[k]);
        first=0;
    }
    return 0;
}

/*
Q88: Replace spaces with hyphens in a string.
*/

#include <stdio.h>

int main()
{
    char s[100];
    int i=0;
    printf("Enter a string: ");
    fgets(s,100,stdin);
    while(s[i]!=0&&s[i]!='\n')
    {
        if(s[i]==' ')
            s[i]='-';
        i++;
    }
    printf("%s",s);
    return 0;
}

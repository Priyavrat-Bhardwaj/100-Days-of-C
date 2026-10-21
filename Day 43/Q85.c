/*
Q85: Reverse a string.
*/

#include <stdio.h>

int main()
{
    char s[100];
    int i=0,len=0;
    printf("Enter a string: ");
    fgets(s,100,stdin);
    while(s[len]!=0&&s[len]!='\n')
        len++;
    for(i=len-1; i>=0; i--)
        printf("%c",s[i]);
    return 0;
}

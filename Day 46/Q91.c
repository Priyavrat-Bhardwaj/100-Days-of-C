/*
Q91: Remove all vowels from a string.
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
        if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
            printf("%c",s[i]);
        i++;
    }
    return 0;
}

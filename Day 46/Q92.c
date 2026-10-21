/*
Q92: Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main()
{
    char s[100];
    int count[26]=
    {
        0
    }
    ,i=0;
    printf("Enter a lowercase string: ");
    fgets(s,100,stdin);
    while(s[i]!=0&&s[i]!='\n')
    {
        if(s[i]>='a'&&s[i]<='z')
            count[s[i]-'a']++;
        i++;
    }
    i=0;
    while(s[i]!=0&&s[i]!='\n')
    {
        if(s[i]>='a'&&s[i]<='z'&&count[s[i]-'a']>1)
        {
            printf("%c",s[i]);
            return 0;
        }
        i++;
    }
    printf("No repeating alphabet");
    return 0;
}

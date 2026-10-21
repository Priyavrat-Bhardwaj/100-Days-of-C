/*
Q84: Convert a lowercase string to uppercase without using built-in functions.
*/

#include <stdio.h>

int main()
{
    char s[100];
    int i=0;
    printf("Enter a lowercase string: ");
    fgets(s,100,stdin);
    while(s[i]!=0&&s[i]!='\n')
    {
        if(s[i]>='a'&&s[i]<='z')
            s[i]-=32;
        i++;
    }
    printf("%s",s);
    return 0;
}

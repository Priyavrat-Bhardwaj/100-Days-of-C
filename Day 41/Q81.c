/*
Q81: Count characters in a string without using built-in length functions.
*/

#include <stdio.h>

int main()
{
    char s[100];
    int i=0,count=0;
    printf("Enter a string: ");
    fgets(s,100,stdin);
    while(s[i]!=0&&s[i]!='\n')
    {
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}

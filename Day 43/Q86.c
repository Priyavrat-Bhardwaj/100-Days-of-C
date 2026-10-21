/*
Q86: Check if a string is a palindrome.
*/

#include <stdio.h>

int main()
{
    char s[100];
    int i,len=0,p=1;
    printf("Enter a string: ");
    fgets(s,100,stdin);
    while(s[len]!=0&&s[len]!='\n')
        len++;
    for(i=0; i<len/2; i++)
        if(s[i]!=s[len-i-1])
    {
        p=0;
        break;
    }
    if(p)
        printf("Palindrome");
    else printf("Not palindrome");
    return 0;
}

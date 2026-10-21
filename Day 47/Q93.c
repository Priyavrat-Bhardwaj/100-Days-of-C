/*
Q93: Check if two strings are anagrams of each other.
*/

#include <stdio.h>

int main()
{
    char a[100],b[100];
    int count[26]=
    {
        0
    }
    ,i=0;
    printf("Enter first string: ");
    scanf("%s",a);
    printf("Enter second string: ");
    scanf("%s",b);
    while(a[i]!=0)
    {
        count[a[i]-'a']++;
        i++;
    }
    i=0;
    while(b[i]!=0)
    {
        count[b[i]-'a']--;
        i++;
    }
    for(i=0; i<26; i++)
        if(count[i]!=0)
    {
        printf("Not anagrams");
        return 0;
    }
    printf("Anagrams");
    return 0;
}

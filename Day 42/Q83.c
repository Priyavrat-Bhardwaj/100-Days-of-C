/*
Q83: Count vowels and consonants in a string.
*/

#include <stdio.h>

int main()
{
    char s[100];
    int i=0,v=0,c=0;
    printf("Enter a string: ");
    fgets(s,100,stdin);
    while(s[i]!=0&&s[i]!='\n')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            v++;
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))c++;
        i++;
    }
    printf("Vowels=%d, Consonants=%d",v,c);
    return 0;
}

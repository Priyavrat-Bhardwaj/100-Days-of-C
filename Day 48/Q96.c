/*
Q96: Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>

int main()
{
    char s[200];
    int i=0,start,end,j;
    printf("Enter a sentence: ");
    fgets(s,200,stdin);
    while(s[i]!=0)
    {
        while(s[i]==' ')
        {
            printf(" ");
            i++;
        }
        start=i;
        while(s[i]!=' '&&s[i]!=0&&s[i]!='\n')
            i++;
        end=i-1;
        for(j=end; j>=start; j--)
            printf("%c",s[j]);
        if(s[i]=='\n')
            break;
    }
    return 0;
}

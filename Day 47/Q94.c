/*
Q94: Find the longest word in a sentence.
*/

#include <stdio.h>

int main()
{
    char s[200],longest[100],word[100];
    int i=0,j=0,k,max=0;
    printf("Enter a sentence: ");
    fgets(s,200,stdin);
    while(1)
    {
        if(s[i]!=' '&&s[i]!=0&&s[i]!='\n')
        {
            word[j]=s[i];
            j++;
        }
        else
        {
            if(j>max)
            {
                max=j;
                word[j]=0;
                for(k=0; k<=j; k++)
                    longest[k]=word[k];
            }
            j=0;
            if(s[i]==0||s[i]=='\n')
                break;
        }
        i++;
    }
    printf("%s",longest);
    return 0;
}

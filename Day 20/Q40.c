/*
Q40: Write a program to find the 1's complement of a binary number and print it.
*/

#include <stdio.h>

int main()
{
    char b[100];
    int i;
    printf("Enter a binary number: ");
    scanf("%s",b);
    for(i=0; b[i]!=0; i++)
    {
        if(b[i]=='0')
            b[i]='1';
        else b[i]='0';
    }
    printf("%s",b);
    return 0;
}

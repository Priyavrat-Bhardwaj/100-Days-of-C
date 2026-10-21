/*
Q98: Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>

int main()
{
    char name[100];
    int i=0,last=0;
    printf("Enter full name: ");
    fgets(name,100,stdin);
    while(name[i]!=0&&name[i]!='\n')
    {
        if(name[i]==' ')
            last=i+1;
        i++;
    }
    printf("%c.",name[0]);
    for(i=1; i<last; i++)
        if(name[i-1]==' '&&i<last-1)
            printf("%c.",name[i]);
    printf(" ");
    for(i=last; name[i]!=0&&name[i]!='\n'; i++)
        printf("%c",name[i]);
    return 0;
}

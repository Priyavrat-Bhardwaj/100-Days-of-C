/*
Q43: Write a program to check if a number is a strong number.
*/

#include <stdio.h>

int main()
{
    int n,o,d,i,f,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
        d=n%10;
        f=1;
        for(i=1; i<=d; i++)
            f*=i;
        sum+=f;
        n/=10;
    }
    if(sum==o)
        printf("Strong number");
    else printf("Not strong number");
    return 0;
}

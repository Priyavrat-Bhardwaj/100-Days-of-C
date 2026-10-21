/*
Q31: Write a program to take a number as input and print its equivalent binary representation.
*/

#include <stdio.h>

int main()
{
    int n,b=0,p=1,r;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    if(n==0)
        printf("0");
    else
    {
        while(n>0)
        {
            r=n%2;
            b+=r*p;
            p*=10;
            n/=2;
        }
        printf("%d",b);
    }
    return 0;
}

/*
Q30: Write a program to reverse a given number.
*/

#include <stdio.h>

int main()
{
    int n,rev=0,d;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    printf("%d",rev);
    return 0;
}

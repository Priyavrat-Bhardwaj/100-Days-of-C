/*
Q32: Write a program to check if a number is a palindrome.
*/

#include <stdio.h>

int main()
{
    int n,o,r=0,d;
    printf("Enter a number: ");
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n/=10;
    }
    if(o==r)
        printf("Palindrome");
    else printf("Not palindrome");
    return 0;
}

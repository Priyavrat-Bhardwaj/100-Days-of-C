/*
Q41: Write a program to swap the first and last digit of a number.
*/

#include <stdio.h>

int main()
{
    int n,first,last,temp,place=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    last=n%10;
    temp=n;
    while(temp>=10)
    {
        temp/=10;
        place*=10;
    }
    first=temp;
    n=n-first*place-last+last*place+first;
    printf("%d",n);
    return 0;
}

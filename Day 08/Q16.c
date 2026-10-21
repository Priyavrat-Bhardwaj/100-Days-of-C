/*
Q16: Write a program to input three numbers and find the largest among them using if–else.
*/

#include <stdio.h>

int main()
{
    int a,b,c,largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c)
        largest=a;
    else if(b>=a&&b>=c) largest=b;
    else largest=c;
    printf("Largest is %d",largest);
    return 0;
}

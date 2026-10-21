/*
Q64: Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main()
{
    int n,d,count[10]=
    {
        0
    }
    ,i,max=0,result=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n==0)
        count[0]=1;
    while(n!=0)
    {
        d=n%10;
        if(d<0)
            d=-d;
        count[d]++;
        n/=10;
    }
    for(i=0; i<=9; i++)
        if(count[i]>max)
    {
        max=count[i];
        result=i;
    }
    printf("%d",result);
    return 0;
}

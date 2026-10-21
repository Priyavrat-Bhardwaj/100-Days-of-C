/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.
*/

#include <stdio.h>

int main()
{
    float cost,selling,p;
    printf("Enter cost price and selling price: ");
    scanf("%f %f",&cost,&selling);
    if(selling>cost)
    {
        p=((selling-cost)/cost)*100;
        printf("Profit %g%%",p);
    }
    else if(cost>selling)
    {
        p=((cost-selling)/cost)*100;
        printf("Loss %g%%",p);
    }
    else printf("No Profit No Loss");
    return 0;
}

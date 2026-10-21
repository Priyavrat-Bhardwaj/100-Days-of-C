/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
*/

#include <stdio.h>

#include <math.h>

int main()
{
    float principal,rate,time,simple,compound;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f",&principal,&rate,&time);
    simple=(principal*rate*time)/100;
    compound=principal*pow(1+rate/100,time)-principal;
    printf("Simple Interest=%g, Compound Interest=%g",simple,compound);
    return 0;
}

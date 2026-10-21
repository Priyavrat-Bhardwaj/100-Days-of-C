/*
Q33: Write a program to check if a number is an Armstrong number.
*/

#include <stdio.h>

int main()
{
    int n, original, temp, digit, digits = 0, i;
    int power, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    temp = n;
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }
    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        power = 1;
        for (i = 1; i <= digits; i++)
            power = power * digit;
        sum = sum + power;
        temp = temp / 10;
    }
    if (original == sum)
        printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}

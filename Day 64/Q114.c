/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/

#include <stdio.h>

int main()
{
    char s[100];
    int i, j, k, length = 0, maxLength = 0, repeat;
    printf("Enter the string: ");
    scanf("%s", s);
    while (s[length] != '\0')
        length++;
    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            repeat = 0;
            for (k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }
            if (repeat == 1)
                break;
            if (j - i + 1 > maxLength)
                maxLength = j - i + 1;
        }
    }
    printf("%d", maxLength);
    return 0;
}

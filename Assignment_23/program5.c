// !Accept a character from user and its ASCII value in decimal, octal and hexadecimal format.

/*
Input   :   A
Output  :   Decimal       65
            Octal         0101
            Hexadecimal   0X41
*/

#include<stdio.h>

void Display(char ch)
{
   printf("Decimal\t\t%d\n", ch);
   printf("Octal\t\t0%o\n", ch);
   printf("Hexadecimal\t0X%X", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
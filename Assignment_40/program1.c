// ! Draw stack layout. Write a recursive program which display below pattern
/*
Output : * * * * *
*/

#include<stdio.h>

void Display()
{
    static int i = 0;

    if(i < 5)
    {
        printf("*\t");
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}
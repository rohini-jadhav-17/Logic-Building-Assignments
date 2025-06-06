// !Accept the number of rows and number of columns from user and display below pattern

/*
Input   :   iRow = 6    iCol = 6
Output  :   *   *   *   *   *   *
            *   #   #   #   *   *
            *   #   #   *   $   *
            *   #   *   $   $   *
            *   *   $   $   $   *
            *   *   *   *   *   *
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            if((i == j) || (i == 1) || (j == 1) || (i == iRow) || (j == iCol))
            {
                printf("*\t");
            }
            else if((i > j) && (i != iRow) && (j != iCol))
            {
                printf("$\t");
            }
            else
            {
                printf("#\t");
            }

        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns :\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

// * Time Complexity : O(N^2)
// * N is a natural number
// * Where N >= 0 and N <= Infinity
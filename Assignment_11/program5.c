// !Accept the number from user and display below pattern

/*
Input  :  8
Output :  2  4  6  8 10  12  14  16
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    // updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", 2*iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements :\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity
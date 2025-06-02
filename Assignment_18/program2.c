// !Accept N numbers from the user and display all such elements which are divisible by 5.

/*
Input   :   N : 6
            Elements : 85 66 3 80 93 88
Output  :   85 80
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the size of elements :\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements :");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    
    Display(ptr, iSize);

    free(ptr);

    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity
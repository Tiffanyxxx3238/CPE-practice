#include <stdio.h>

int main()
{
    int A[20] = {3, 5, 6, 8, 13, 2, 1, 4, 7, 9, 15, 14, 16, 10, 12, 11, 19, 20, 18, 17 };
    int i, x, j;

    /* insertion sort */
    for(i=1; i<20; i++)
    {
        x = A[i];
        for(j=i-1; j>=0; j--)
        {
            if( A[j] > x)
            {
                A[j+1] = A[j];
            }
            else
            {
                A[j+1] = x;
                break;
            }
        }

        if(j<0)
        {
            A[0] = x;
        }
    }
    /* print contents of A */
    for(i=0; i<20; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    return 0;
}
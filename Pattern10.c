/*
              1

           1  2  3

        1  2  3  4  5

     1  2  3  4  5  6  7

  1  2  3  4  5  6  7  8  9

*/

#include <stdio.h>

int main()
{
    int nR;
    
    printf("Enter no of rows : ");
    scanf("%d", &nR);

    for (int r=1; r<=nR; r++)
    {
        int i=1;
        for (int c=1; c<=nR; c++) 
        {
            if(c<=nR-r) printf("   ");
            else printf("%3d", i++);
        }
        for (int c=1; c<=r-1; c++) printf("%3d", i++) ;
        printf("\n");
    }

    return 0;
}
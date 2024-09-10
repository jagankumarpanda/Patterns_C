/*

* * * * *
  *   *
    *
    *
  *   *
* * * * *

*/

#include <stdio.h>

int main()
{
    int nR;
    
    printf("Enter no of rows : ");
    scanf("%d", &nR);
    
    for (int c=1; c<=2*nR-1; c++) printf("* ");
    printf("\n");
    
    for (int r=2; r<=nR-1; r++)
    {
        for (int c=1; c<=nR+r+1; c++)
        {
            if(c<=r-1) printf("  ");
            else if (c==r) printf("* ");
            else if (c==2*nR-r) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    
    for (int r=1; r<=nR-1; r++)
    {
        for (int c=1; c<=nR+r-1; c++)
        {
            if(c<=nR-r) printf("  ");
            else if (c==nR-r+1) printf("* ");
            else if (c<=nR+r-2) printf("  ");
            else printf("* ");
        }
        printf("\n");
    }
    
    for (int c=1; c<=2*nR-1; c++) printf("* ");
    
}
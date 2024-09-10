/*

* * * *
* * * *
* * * *

*/

#include <stdio.h>

int main() 
{
    int nR, nC;
    
    printf("Enter no of rows and column : \n");
    scanf("%d%d", &nR, &nC);
    
    for (int r=1; r<=nR; r++)
    {
        for (int c=1; c<=nC; c++) printf("* ");
        printf("\n");
    }
    
    return 0;
}
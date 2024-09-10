/*
      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7
*/

#include <stdio.h>

int main() 
{
    int nR ;
    
    printf("Enter no of rows : \n");
    scanf("%d", &nR);
    
    for (int r=1; r<=nR; r++)
    {
        int i = 1;
        for (int c=1; c<=nR+r-1; c++) 
        {
            if(c<=nR-r) printf("  ");
            else printf("%d ", i++);
        }        
        printf("\n");
    }
    
    return 0;
}
/*
1 1 1 1 
1 1 2 2
1 3 3 3
4 4 4 4
*/

#include <stdio.h>

int main() 
{
    int nRC ;
    
    printf("Enter no of rows or columns ( rows = column ) : \n");
    scanf("%d", &nRC);
    
    for (int r=1; r<=nRC; r++)
    {
        for (int c=1; c<=nRC-r; c++) printf("%d ", 1);
        for (int c=nRC-r+1; c<=nRC; c++) printf("%d ",r);
        printf("\n");
    }
    
    return 0;
}
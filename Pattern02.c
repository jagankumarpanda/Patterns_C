/*
1 2 3 4
2 3 4 5 
3 4 5 6 
*/

#include <stdio.h>

int main() 
{
    int nR, nC;
    
    printf("Enter no of rows and columns : \n");
    scanf("%d%d", &nR, &nC);
    
    for (int r=1; r<=nR; r++)
    {
        int i = r;
        for(int c=1; c<=nC; c++) printf("%d ", i++);
        printf("\n");
    }
    
    return 0;
}
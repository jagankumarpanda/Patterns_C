/*
1 2 3 4
4 3 2 1 
1 2 3 4 
4 3 2 1 
*/

#include <stdio.h>

int main() 
{
    int nR, nC ;
    
    printf("Enter no of rows and columns : \n");
    scanf("%d%d", &nR, &nC);
    
    for (int r=1; r<=nR; r++)
    {
        if (r%2!=0) for(int i=1; i<=nC; i++) printf("%d ", i);
        else for (int i=nC; i>=1; i--) printf("%d ", i);
        printf("\n");
    }
    
    return 0;
}
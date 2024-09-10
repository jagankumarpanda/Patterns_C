/*

1 2 3 4 5
1       5
1       5
1       5
1 2 3 4 5

*/

#include <stdio.h>

int main() 
{
    int nR ;
    
    printf("Enter no of rows : \n");
    scanf("%d", &nR);
    
    for (int r=1; r<=nR; r++)
    {
        for (int c=1; c<=nR; c++) 
        {
            if(c==1 || r==1 || c==nR || r==nR) printf("%d ",c);
            else printf("  ");
        }        
        printf("\n");
    }
    
    return 0;
}
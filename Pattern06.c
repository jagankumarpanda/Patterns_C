/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include <stdio.h>

int main() 
{
    int nRC ;
    
    printf("Enter no of rows or columns ( rows = column ) : \n");
    scanf("%d", &nRC);
    
    for (int r=1; r<=nRC; r++)
    {
        for (int c=1; c<=r; c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
    
    return 0;
}
/*
1 0 0 0 0
2 1 0 0 0
2 2 1 0 0
2 2 2 1 0
2 2 2 2 1
*/

#include <stdio.h>

int main() 
{
    int nRC ;
    
    printf("Enter no of rows or columns ( rows = column ) : \n");
    scanf("%d", &nRC);
    
    for (int r=1; r<=nRC; r++)
    {
        for (int c=1; c<=nRC; c++)
        {
            if(r==c) printf("1 ");
            else if (c>r) printf("0 ");
            else printf("2 ");
        }
        printf("\n");
    }
    
    return 0;
}
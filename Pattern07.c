/*
        A
      B B
    C C C
  D D D D
E E E E E
*/

#include <stdio.h>

int main() 
{
    int nRC ;
    char ch = 'A';
    
    printf("Enter no of rows or columns ( rows = column ) : \n");
    scanf("%d", &nRC);
    
    for (int r=1; r<=nRC; r++)
    {
        for (int c=1; c<=nRC; c++) 
        {
            if(c<=nRC-r) printf("  ");
            else printf("%c ", ch);
        }        
        ch += 1;
        printf("\n");
    }
    
    return 0;
}
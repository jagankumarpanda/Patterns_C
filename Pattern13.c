/*
          A
        A   C
      A       E
    A           G
  A B C D E F G H I
*/

#include <stdio.h>

int main()
{
    int nR;
    
    printf("Enter no of rows : ");
    scanf("%d", &nR);
    
    for (int r=1; r<=nR-1; r++)
    {
        char ch = 'A'; 
        for (int c=1; c<=nR+r-1; c++)
        {
            if(c<=nR-r) printf("  ");
            else if (c==nR-r+1) printf("%c ", ch++);
            else if (c<=nR+r-2) printf("  ", ch++);
            else printf("%c ", ch);
        }
        printf("\n");
    }
    char ch ='A';
    for (int c=1; c<=2*nR-1; c++) printf("%c ", ch++);
    
}
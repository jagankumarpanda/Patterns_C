  /*
    5 5 5 5 5 5 5 5 5 

    5 4 4 4 4 4 4 4 5 

    5 4 3 3 3 3 3 4 5 

    5 4 3 2 2 2 3 4 5 

    5 4 3 2 1 2 3 4 5 

    5 4 3 2 2 2 3 4 5 

    5 4 3 3 3 3 3 4 5 

    5 4 4 4 4 4 4 4 5 

    5 5 5 5 5 5 5 5 5
*/

#include <stdio.h>

int main()
{
    int nR;

    printf("Enter no of rows : ");
    scanf("%d", &nR);

    for (int r=1; r<=nR; r++)
    {
        int i=nR;
        for (int c=1; c<=nR; c++) 
        {
            if(c<=r-1) printf("%d ", i--);
            else printf("%d ", i);
        }
        for (int c=1; c<=nR-1; c++) 
        {
            if(c<=nR-r) printf("%d ", i);
            else printf("%d ", ++i);
        }
        printf("\n");
    }

    for (int r=1; r<=nR-1; r++)
    {
        int i=nR;
        for (int c=1; c<=nR; c++) 
        {
            if(c<=nR-r-1) printf("%d ", i--);
            else printf("%d ", i);
        }
        for (int c=1; c<=nR-1; c++) 
        {
            if(c<=r) printf("%d ", i);
            else printf("%d ", ++i);
        }
        printf("\n");
    }
    return 0;
}

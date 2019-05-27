#include <stdio.h>

int main()
{
    int rowsCount, colsCount, rowsCounter, colsCounter;

    printf("Enter number of rows\n");
    scanf("%d",&rowsCount);
    printf("Enter number of columns\n");
    scanf("%d",&colsCount);

    for(rowsCounter = 0; rowsCounter < rowsCount; rowsCounter++)
    {
        for (colsCounter = 0; colsCounter < colsCount; colsCounter++)
        {
            printf("%3d", rowsCounter+colsCounter);
        }/*end for */
        printf("\n");
    }/* end for*/
    return 0;
}

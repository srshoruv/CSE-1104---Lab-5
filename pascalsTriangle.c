#include <stdio.h>

int main()
{
    int row,rows, middle;
    scanf("%d", &row);
    rows = row - 1;
    middle = rows / 2;

    // first row
    for (int i = 1; i <= rows; i++)

    {
        printf(" ");
    }
    printf("%d", 1);
    printf("\n");

    // all rows
    for (int i = 1; i <= rows; i++)
    {
        int a, b;
        for (int k = rows; k > i; k-- )

        {   
            
            printf(" ");

        }
        
        printf("%d", 1);

        // inside
        for (int j = rows + i-2; j >= rows - i; j-- )

        {
            // printf(" %d ", 2);
            printf(" ");

        }
        printf("%d", 1);
        printf("\n");
        
    }
}
#include <stdio.h>

int main()
{
    int row,rows, middle;
    scanf("%d", &row);
    rows = row - 1;
    middle = rows / 2;

    for (int i = 1; i <= rows; i++)

    {
        printf(" _ ");
    }

    printf(" 1 \n");

    for (int i = 1; i <= rows; i++)
    {
        for (int k = rows; k > i; k-- )

        {
            printf(" _ ");

        }
        
        printf("1");
        // spaces inside
        for (int j = rows + i-2; j >= rows - i; j-- )

        {
            printf(" _ ");

        }
        printf("1\n");
        
    }
}
#include <stdio.h>

int main()
{
    int rows,c;
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        // spaces

        for (int j = 0; j < rows - i - 1; j++)
        {
            printf("  ");
        }

        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                c = 1;
            }
            else
            {
                c = ( c * (i - j + 1) ) / j;
            }

            printf(" %2d ", c);
        }

        printf("\n");
    }
}
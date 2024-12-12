#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number to print a pattern: ");
    scanf("%d", &x);

    for (int i = x; i >=1; i--)
    {
        for (int j = x; j >= i; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
        
    }
}
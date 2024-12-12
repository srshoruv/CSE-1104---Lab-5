#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number to check prime number: ");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("NOT a prime number\n");
        return 0;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % 2 == 0)
        {
            printf("NOT a prime number\n");
            return 0;
        }
    }

    printf("PRIME number\n");
}
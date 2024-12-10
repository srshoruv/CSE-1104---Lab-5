#include <stdio.h>

int main()
{
    int x,temp,rev = 0;
    printf("Input a number to reverse:");
    scanf("%d", &x);

    temp = x;

    while (x)
    {
        int lastDig = x % 10;
        rev = (rev*10) + lastDig;
        x = x / 10;   
    }

    printf("%d in reverse is %d\n",temp, rev);
}
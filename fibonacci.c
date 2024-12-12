#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);

    int firstNum = 0;
    int secondNum = 1;
    while (firstNum < input)
    {
        int temp = firstNum;
        printf("%d ", firstNum);
        
        firstNum += secondNum;
        secondNum = temp;
    }

    return 0;

}
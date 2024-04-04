// Задача 4. Перевернуть число
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1 = 0;
    int num2 = 0;
    printf("Enter number: \n");
    scanf("%d", &num1);

    while (num1 > 0)
    {
        num2 = num2 * 10 + num1 % 10;
        num1 = num1 / 10;
    }
    printf("Reversed number: %d\n", num2);
    return 0;
}

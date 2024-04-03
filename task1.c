// Задача 1. Сумма квадратов маленьких чисел
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, sum;
    printf("Enter two integers a and b (a ≤ b)\n");
    scanf("%d%d", &num1, &num2);
    for (int i = num1; i <= num2; i++)
    {
        sum += i * i;
        
    }
    printf("%d\n",sum);
    return 0;
}

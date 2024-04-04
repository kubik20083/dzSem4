// Задача 3. Все цифры четные
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter number: \n");
    int num;
    scanf("%d", &num);
    while (num > 0)
    {
        if((num % 10) % 2 != 0)
        {
            printf("no\n");
            return 0;
        }
        else
        num = num / 10;
    }
    printf("yes\n");
    
    return 0;
}

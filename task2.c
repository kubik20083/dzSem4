// Задача 2. Ровно три цифры

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter number: \n");
    scanf("%d", &num);
    num = num / 100;
    if(num >= 1 && num <= 9)
      
    printf("YES\n");
    else
    printf("NO\n");
    
    return 0;
}

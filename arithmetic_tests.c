/*

A simple calculator

*/

#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b)  {
    return a + b;
}

int subtraction(int a, int b)   {
    return a - b;
}

int multiplication(int a, int b)    {
    return a * b;
}

int division(int a, int b)  {
    return a / b;
}

int main(void)  {
    int a;
    int b;
    char c;
    
    printf("Enter integer: ");
    scanf("%d", &a);
    printf("Enter integer: ");
    scanf(" %d", &b);
    printf("For addition, enter 'a'\nFor subtraction, enter 'b'\nFor multiplication, enter 'c'\nFor division, enter 'd':\n");
    scanf(" %c", &c);
    
    if (c == 'a')  {
        int result = addition(a, b);
        printf("%d\n", result);
    }
    
    else if (c == 'b')  {
        int result = subtraction(a, b);
        printf("%d\n", result);
    }
    
    else if (c == 'c')  {
        int result = multiplication(a, b);
        printf("%d\n", result);
    }

    else if (c == 'd')  {
        int result = division(a, b);
        printf("%d\n", result);
    }

    return 0;
}

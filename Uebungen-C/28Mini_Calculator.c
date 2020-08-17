#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result = 0;
    int num1 = 0;
    int num2 = 0;
    char oper;

    printf("Hello John, this is your calculator!\nEnter your first integer:\n");
    scanf("%d", &num1);
    printf("\nWhat shall we do with _%d_?\nEnter an operator:\n", num1);
    fflush(stdin);
    scanf("%c", &oper);
    printf("\nMhhh...%c...good choice!\nNow, what do we do next?\nEnter your second integer:\n", oper);
    scanf("%d", &num2);
    printf("\n%d it will be, let's check what the magic of math will do:\n", num2);
    switch(oper)
    {
        case '+': result = num1 + num2;
            break;
        case '-': result = num1 - num2;
            break;
        case '*': result = num1 * num2;
            break;
        case '/': if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("\nNo,John, I can't divide by zero!");
                return 0;
        }
            break;
        case '%': if (num2 != 0)
        {
            result = num1 % num2;
        }
        else
        {
            printf("\nNo,John, I can't divide by zero!");
                return 0;
        };
            break;
        default: printf("\nError, John. Something went wrong:\n%d\n%d\n%d\n%c", num1, num2, result, oper);
            break;
    }

    printf("\n%d is the result of our calculation of %d%c%d\n", result, num1, oper, num2);

    return 0;
}

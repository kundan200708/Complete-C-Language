// wap to atm withdrawal system using nested if?
#include <stdio.h>

int main()
{
    int pin, amount;
    int balance = 5000;

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin == 1234)
    {
        printf("Enter withdrawal amount: ");
        scanf("%d", &amount);

        if (amount <= balance)
        {
            printf("Withdrawal successful!");
            printf("\nRemaining balance: Rs. %d", balance - amount);
        }
        else
        {
            printf("Insufficient balance!");
        }
    }
    else
    {
        printf("Incorrect PIN!");
    }

    return 0;
}
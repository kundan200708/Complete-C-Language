#include <stdio.h>

int main()
{
    int pin, attempts = 0;
    int correctPin = 729;
    int access = 0;

    while(attempts < 3)
    {
        printf("Enter 3-digit PIN: ");
        scanf("%d", &pin);

        if(pin < 100 || pin > 999)
        {
            printf("Invalid PIN! Enter a 3-digit number.\n");
            continue;
        }

        attempts++;

        if(pin == correctPin)
        {
            printf("\nAccess Granted!\n");
            printf("Welcome!\n");

            access = 1;
            break;
        }
        else
        {
            printf("Wrong PIN!\n");

            if(pin > correctPin)
                printf("Hint: PIN is lower.\n");
            else
                printf("Hint: PIN is higher.\n");

            printf("Attempts left: %d\n\n", 3 - attempts);
        }
    }

    if(access == 0)
    {
        printf("\nAccess Denied!\n");
        printf("Too many incorrect attempts.\n");
    }

    return 0;
}
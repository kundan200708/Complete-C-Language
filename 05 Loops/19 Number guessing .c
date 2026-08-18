
// Write a C program where the computer has a secret number,
//  and the user keeps guessing until they get it right.
#include <stdio.h>

int main()
{
    int secret = 37;
    int guess;
    int attempts = 0;

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess < secret)
        {
            printf("Too low!\n");
        }
        else if(guess > secret)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Correct! You guessed it!\n");
            printf("Total attempts: %d\n", attempts);
            break;
        }

    } while(1);

    return 0;
}
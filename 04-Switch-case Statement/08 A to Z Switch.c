// wap to print A for Apple to Z for Zebra in capital form?
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter capital alphabet: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'A':
            printf("Apple");
            break;
        case 'B':
            printf("Ball");
            break;
        case 'C':
            printf("Cat");
            break;
        case 'D':
            printf("Dog");
            break;
        case 'E':
            printf("Elephant");
            break;
        case 'F':
            printf("Fish");
            break;
        case 'G':
            printf("Grapes");
            break;
        case 'H':
            printf("Horse");
            break;
        case 'I':
            printf("Ice Cream");
            break;
        case 'J':
            printf("Jug");
            break;
        case 'K':
            printf("Kite");
            break;
        case 'L':
            printf("Lion");
            break;
        case 'M':
            printf("Mango");
            break;
        case 'N':
            printf("Nest");
            break;
        case 'O':
            printf("Orange");
            break;
        case 'P':
            printf("Parrot");
            break;
        case 'Q':
            printf("Queen");
            break;
        case 'R':
            printf("Rabbit");
            break;
        case 'S':
            printf("Sun");
            break;
        case 'T':
            printf("Tiger");
            break;
        case 'U':
            printf("Umbrella");
            break;
        case 'V':
            printf("Van");
            break;
        case 'W':
            printf("Watch");
            break;
        case 'X':
            printf("X-Ray");
            break;
        case 'Y':
            printf("Yak");
            break;
        case 'Z':
            printf("Zebra");
            break;

        default:
            printf("Invalid Capital Alphabet");
    }

    return 0;
}
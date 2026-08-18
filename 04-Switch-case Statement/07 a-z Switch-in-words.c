// /* WAP to print a for apple, b for ball etc. */
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter small alphabet from your choice : ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a': printf("apple"); break;
        case 'b': printf("ball"); break;
        case 'c': printf("cat"); break;
        case 'd': printf("dog"); break;
        case 'e': printf("elephant"); break;
        case 'f': printf("fish"); break;
        case 'g': printf("grapes"); break;
        case 'h': printf("horse"); break;
        case 'i': printf("ice cream"); break;
        case 'j': printf("jug"); break;
        case 'k': printf("kite"); break;
        case 'l': printf("lion"); break;
        case 'm': printf("mango"); break;
        case 'n': printf("nest"); break;
        case 'o': printf("orange"); break;
        case 'p': printf("parrot"); break;
        case 'q': printf("queen"); break;
        case 'r': printf("rabbit"); break;
        case 's': printf("sun"); break;
        case 't': printf("tiger"); break;
        case 'u': printf("umbrella"); break;
        case 'v': printf("van"); break;
        case 'w': printf("watch"); break;
        case 'x': printf("x-ray"); break;
        case 'y': printf("yak"); break;
        case 'z': printf("zebra"); break;

        default: printf("Invalid small alphabet");
    }

    return 0;
}
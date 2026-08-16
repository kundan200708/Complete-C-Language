// Write a C program to determine an astronaut's mission level based on their training score 
// using an if-else-if ladder.
#include <stdio.h>

int main()
{
    int score;

    printf("Enter astronaut training score: ");
    scanf("%d", &score);

    if (score >= 90)
    {
        printf("Mission Level: Commander Mission");
    }
    else if (score >= 75)
    {
        printf("Mission Level: Pilot Mission");
    }
    else if (score >= 60)
    {
        printf("Mission Level: Research Mission");
    }
    else if (score >= 40)
    {
        printf("Mission Level: Training Mission");
    }
    else
    {
        printf("Mission Status: Mission Rejected");
    }

    return 0;
}
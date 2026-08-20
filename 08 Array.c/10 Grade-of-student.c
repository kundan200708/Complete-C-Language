#include <stdio.h>

int main()
{
    int studentMarks[25][4] = {
        {78, 85, 69, 90},
        {66, 74, 81, 72},
        {88, 92, 79, 85},
        {55, 63, 70, 68},
        {91, 89, 94, 90},
        {72, 76, 68, 74},
        {84, 80, 78, 82},
        {69, 71, 65, 70},
        {95, 93, 97, 96},
        {60, 58, 62, 64},
        {77, 79, 75, 73},
        {83, 86, 88, 84},
        {70, 68, 72, 71},
        {90, 87, 85, 89},
        {64, 66, 61, 63},
        {81, 78, 80, 79},
        {74, 72, 76, 75},
        {68, 70, 67, 69},
        {92, 90, 91, 93},
        {59, 57, 60, 58},
        {86, 88, 84, 87},
        {73, 75, 71, 74},
        {67, 65, 69, 66},
        {89, 91, 88, 90},
        {76, 78, 74, 77}
    };

    int totalMarks[25];
    char grade[25][4];

    // Finding total marks
    for (int i = 0; i < 25; i++)
    {
        totalMarks[i] = 0;

        for (int j = 0; j < 4; j++)
        {
            totalMarks[i] = totalMarks[i] + studentMarks[i][j];
        }
    }

    // Finding grades
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (studentMarks[i][j] >= 60)
                grade[i][j] = 'A';

            else if (studentMarks[i][j] >= 45)
                grade[i][j] = 'B';

            else if (studentMarks[i][j] >= 30)
                grade[i][j] = 'C';

            else
                grade[i][j] = 'F';
        }
    }

    // Display
    printf("\nGRADE CARD - BCA 2nd SEMESTER\n");
    printf("-----------------------------------------------\n");
    printf("Roll  C   DSA  NET  BA  | Grade | Total\n");
    printf("-----------------------------------------------\n");

    for (int i = 0; i < 25; i++)
    {
        printf("%3d   ", i + 1);

        for (int j = 0; j < 4; j++)
        {
            printf("%3d ", studentMarks[i][j]);
        }

        printf("| ");

        for (int j = 0; j < 4; j++)
        {
            printf("%c ", grade[i][j]);
        }

        printf("| %d", totalMarks[i]);

        printf("\n");
    }

    return 0;
}
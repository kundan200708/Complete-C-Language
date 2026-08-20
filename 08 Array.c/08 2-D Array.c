/*
Two Dimensional Array:-
                      --> The Two-Dimensional array is also known as matrix that stores data in tabular form
                      that is row and column wise.

                      --> It is able to store large amount of data and used to implement tree, graph data structures.


(*) Synatx for 2-D array:-
                          data_type array_name[rows][columns];
                          int mat1 [4] [5];
                          float mat2 [3] [3];
                          long int mat3 [3] [3];                 


*/
#include <stdio.h>

int main() {

    // Initialization of 3x3 matrix
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Printing the matrix
    printf("The matrix is:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
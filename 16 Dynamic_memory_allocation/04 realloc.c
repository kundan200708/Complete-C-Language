/* realloc */

/*
    realloc means reallocation of memory. It is used to resize
    a previously allocated memory block.

    It can:
    1. Increase the size of an allocated memory block.
    2. Decrease the size of an allocated memory block.
    3. Preserve existing data up to the minimum of the old and new sizes.

    Syntax:

        ptr = (cast_type *) realloc(ptr, new_size);

    Here:
        ptr      -> Pointer returned by malloc(), calloc(), or realloc().
        new_size -> New size in bytes.

    Example:

        ptr = (int *) realloc(ptr, 10 * sizeof(int));

    This resizes the memory block so that it can hold
    10 integers.

    If sufficient memory is available, the block is resized.
    Otherwise, realloc() returns NULL and the original memory
    block remains unchanged.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i, n = 5;

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    n = 10;

    ptr = (int *)realloc(ptr, n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    for (i = 5; i < n; i++) {
        ptr[i] = i + 1;
    }

    printf("\nAfter realloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    return 0;
}
/* free() */

/*
free() is used to release or deallocate memory that was
previously allocated dynamically using malloc(), calloc(),
or realloc().

```
When memory is no longer needed, it should be freed to
avoid memory leaks.

Syntax:

    free(ptr);

Here:
    ptr -> Pointer to the memory block that was allocated
           dynamically.

Example:

    int *ptr;

    ptr = (int *)malloc(5 * sizeof(int));

    free(ptr);

After calling free(), the memory becomes available for
reuse by the system.

It is a good practice to set the pointer to NULL after
freeing it:

    free(ptr);
    ptr = NULL;

This helps prevent accidental access to freed memory.
```

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i;

    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    printf("Array elements:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    ptr = NULL;

    printf("\nMemory has been freed.\n");

    return 0;
}
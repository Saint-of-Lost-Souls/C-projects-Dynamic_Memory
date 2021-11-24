#include <stdio.h>
#include <stdlib.h>

// Allocate array of elements = void *calloc(size_t num, size_t size)

int main()
{

    int *p1 = calloc(4, sizeof(int));    // allocate and zero out an array of 4 int
    int *p2 = calloc(1, sizeof(int[4])); // same, naming the array type directly
    int *p3 = calloc(4, sizeof *p3);     // same, without repeating the type name

    if (p2)
    {
        for (int n = 0; n < 4; ++n) // print the array
            printf("p2[%d] == %d\n", n, p2[n]);
    }

    free(p1);
    free(p2);
    free(p3);

    printf("\n\n");
    return EXIT_SUCCESS;
}

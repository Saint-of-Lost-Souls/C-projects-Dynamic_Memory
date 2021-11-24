#include <stdio.h>
#include <stdlib.h>

// Reallocate memory = void *realloc(void *ptr, size_t new_size)

int main()
{

    int *pa = malloc(10 * sizeof *pa); // Allocate a memory of 10 int
    if (pa)
    {
        printf("%zu bytes allocated. Storing ints: ", 10 * sizeof(int));
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", pa[i] = i);
        }
        int *pb = realloc(pa, 1000000 * sizeof *pb); // Reallocate array to larger size
        if (pb)
        {
            printf("\n%zu bytes allocated, first 10 int are: ", 1000000 * sizeof(int));
            for (int i = 0; i < 10; i++)
            {
                printf("%d ", pb[i]); // Show the array
                free(pb);
            }
        }
        else
        {
            free(pa); // If realloc failed, the original pointer needs to be freed
        }
    }

    printf("\n\n");
    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // In memory, where are the variables stored?

    // STATIC:  
        "For memory you know in advance you will always need throughout the program";
        //  Global variable storage, permanent for the entire run of the program
        //  Life cycle as the entire life of the program
        //  Global variables, declared outside functions
        //  Static variables, declared inside functions
        //  Only one copy of that variable for the whole program

    // Stack: // When you have data you need as long as a function is on the stack
        "Don't try to do too many things at once";
        // Local variable storage (automatic continuous memory, LIFO)
        // Automatically managed
        // Grows and sjrinks as LIFO (last in, first out)
        // Local variables and parameters of a function
        // Life cycle limited ti the life cycle of that function
        // Limited pool of memory
        // Stack overflow may occur

    // Heap: // For maximum flexibility, when you don't know in advance how much memory you'll need
        "Once you've used it, put it back";
        // Dynamic storage (large pool of memory, not allocated in contiguous order)
        // Managed by the programmer
        // Allocation and deallocation with sspecial functions
        // Large pool of memory, physical memory bonds
        // Memory blocks managed use pointers
        // Memory leaks can occur

    



    printf("\n\n");
    return EXIT_SUCCESS;
}

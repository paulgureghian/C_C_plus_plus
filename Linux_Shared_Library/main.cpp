// Program that will consume the shared library.
// Allows us to reference built-in standard library input/output functions.
#include <stdio.h>
#include "mars.h"

// Our function implementation int (return type) main (function name) void (parameter type).
int main(void)
{
    // Use the standard library to print to the terminal window.
    puts("I am Paul A. Gureghian, a C++ programmer from Mars.");

    // Call a function in the shared library.
    mars();

        // Exit with a return code 0 indicating success.
        return 0;
}

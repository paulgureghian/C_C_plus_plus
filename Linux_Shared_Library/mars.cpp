// Code for the shared library.
// Allows us to reference built-in standard library input/output functions.
#include <stdio.h>

// Our function definition void (return type) foo (function name) void (parameter type).
void mars(void)
{
    // Use the standard library to print to the terminal window.
    puts("Hello Mars!");
}

// Created by Paul A. Gureghian in May 2020. //
//This C program takes two integers and calculates the sum. //

// Start of program. //

// Import libraries. //
#include <stdio.h>

// Define the main(). //
int main(void)
{
    int i, j, sum;
    
    printf("Enter 1st integer: ");
    scanf("%d", &i);
    
    printf("Enter 2nd integer: ");
    scanf("%d", &j);

    sum = i + j;

    printf("Sum is: %d\n", sum);
    return 0;
}

// End of program. //   
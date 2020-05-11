// Created by Paul A. Gureghian in May 2020. //
//This C program takes two integers and calculates the sum. //

// Start of program. //

// Import libraries. //
#include<stdio.h>

// Define the main(). //
int main()
{
    int i, j, sum;
    scanf("Enter 1'st integer: %d", &i);
    scanf("Enter 2'nd integer: %d", &j);

    sum = i + j;

    printf("Sum is: %d\n", sum);
    return 0;
}

// End of program. //
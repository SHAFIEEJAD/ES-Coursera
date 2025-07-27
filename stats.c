/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief This file contains simple operations on an array of unsigned char values.
 *
 * This file provides functions to compute basic statistics such as mean, median,
 * maximum, and minimum values, as well as sorting and printing the array.
 *
 * @author MOHAMAD SHAFIEE JADDINI
 * @date 27-07-2025
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
    printf("Original Array:\n");
    print_array(test, SIZE);
    printf("\nStatistics:\n");
    print_statistics(test, SIZE);
    printf("\nSorted Array:\n");
    sort_array(test, SIZE);
    printf("\n");
    printf("After Sorting:\n");
    print_array(test, SIZE);
    printf("Statistics after sorting:\n");
    print_statistics(test, SIZE);


}

unsigned int find_maximum(unsigned char *array, int length)
{
    unsigned int max = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

unsigned int find_minimum(unsigned char *array, int length)
{
    unsigned int min = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

unsigned int find_mean(unsigned char *array, int length)
{
    unsigned int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum / length;
}
unsigned int find_median(unsigned char *array, int length)
{
    // First, sort the array
    sort_array(array, length);
    
    if (length % 2 == 0) {
        // If even, return the average of the two middle elements
        return (array[length / 2 - 1] + array[length / 2]) / 2;
    } else {
        // If odd, return the middle element
        return array[length / 2];
    }
}

void sort_array(unsigned char *array, int length)
{
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] < array[j + 1]) { // Sort in descending order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void print_statistics(unsigned char *array, int length)
{
    printf("Maximum: %d\n", find_maximum(array, length));
    printf("Minimum: %d\n", find_minimum(array, length));
    printf("Mean: %d\n", find_mean(array, length));
    printf("Median: %d\n", find_median(array, length));
}
void print_array(unsigned char *array, int length)
{
    printf("Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d - ", array[i]);
    }
    printf("\n");
}

/* Add other Implementation File Code Here */

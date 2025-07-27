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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Mohamad Shafiee Jaddini
 * @date 2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief find_maximum
 * Find the maximum value in an array.
 *
 * @param array Pointer to the array
 * @param length Length of the array
 * @return Maximum value in the array

  * @brief find_minimum
 * Find the minimum value in an array.
 *
 * @param array Pointer to the array
 * @param length Length of the array
 * @return Minimum value in the array


  * @brief find_mean
 * Find the mean value in an array.
 *
 * @param array Pointer to the array
 * @param length Length of the array
 * @return Mean value in the array


  * @brief find_maedian
 * Find the median value in an array.
 *
 * @param array Pointer to the array
 * @param length Length of the array
 * @return Median value in the array


 * @brief sort_array
 * Sort an array in descending order.
 *
 * @param array Pointer to the array
 * @param length Length of the array
 * @return None


 * @brief print_statistics
 * Print the statistics of an array.
 *
 * @param array Pointer to the array
 * @param length Length of the array
 * @return None


 * @brief print_array
 * Print the elements of an array.
 *
 * @param array Pointer to the array
 * @param length Length of the array
 * @return None

 */

unsigned int find_maximum(unsigned char *array, int length);
unsigned int find_minimum(unsigned char *array, int length);
unsigned int find_mean(unsigned char *array, int length);
unsigned int find_median(unsigned char *array, int length);
void sort_array(unsigned char *array, int length);
void print_statistics(unsigned char *array, int length);
void print_array(unsigned char *array, int length);


#endif /* __STATS_H__ */

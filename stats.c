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
 * @brief Statistical analyses to data vector.
 *
 * Analyze an array of unsigned char data items and report analytics on the 
 * maximum, minimum, mean, and median of the data set. The data set is ordered 
 * from large to small. All statistics should be rounded down to the nearest integer. 
 * The data should be printed to the screen in nicely formatted presentation.
 *
 * @author Cariappa AS
 * @date 6 July 2020
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

}

/* Add other Implementation File Code Here */
/**
 * @brief Print data array statistics.
 *
 * A function that prints the statistics of an array including minimum, maximum, 
 * mean, and median.
 *
 * @return void
 */
void print_statistics() {

}

/**
 * @brief Prints array to screen.
 *
 * Given an array of data and a length, prints the array to the screen.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return void
 */
void print_array(unsigned char *data, int len) {

}

/**
 * @brief Calculate array data median value.
 *
 * Given an array of data and a length, returns the median value.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return The data median value
 */
int find_median(unsigned char *data, int len) {

}

/**
 * @brief Calculate array data mean value.
 *
 * Given an array of data and a length, returns the mean.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return The data mean value
 */
int find_mean(unsigned char *data, int len) {

}

/**
 * @brief Calculate array data maximum value.
 *
 * Given an array of data and a length, returns the maximum.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return The data maximum value
 */
int find_maximum(unsigned char *data, int len) {

}

/**
 * @brief Calculate array data minimum value.
 *
 * Given an array of data and a length, returns the minimum.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return The data minimum value
 */
int find_minimum(unsigned char *data, int len) {

}

/**
 * @brief Calculate array data mean value.
 *
 * Given an array of data and a length, sorts the array from 
 * largest to smallest. (The zeroth Element should be the largest 
 * value, and the last element (n-1) should be the smallest value).
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return void
 */
void sort_array(unsigned char *data, int len) {

}

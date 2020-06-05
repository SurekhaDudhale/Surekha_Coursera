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
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief print the input array data on screem
 * 
 * Given a char data array and size of data array is provided
 *
 * @param test data aaray
 * @param SIZE1 size of data array
 * 
 * @return void
 */

void print_array(unsigned char test[],unsigned int SIZE1);

/**
 * @brief sort the elements of data array 
 *
 * 
 * Given a char data array and size of data array is provided
 *
 * @param test data aaray
 * @param SIZE1 size of data array
 * 
 * @return void
 */

void sort_array(unsigned char test[],unsigned int SIZE1);

/**
 * @brief find the median of elements of data array 
 *
 * 
 * Given a char data array and size of data array is provided
 *
 * @param test data aaray
 * @param SIZE1 size of data array
 * 
 * @return unsigned char
 */
unsigned char find_median(unsigned char test[],unsigned int SIZE1);
/**
 * @brief find mean value of elements of data array 
 *
 * 
 * Given a char data array and size of data array is provided
 *
 * @param test data aaray
 * @param SIZE1 size of data array
 * 
 * @return unsigned char
 */
unsigned char find_mean(unsigned char test[],unsigned int SIZE1);

/**
 * @brief find max value from the elements of data array 
 *
 * 
 * Given a char data array and size of data array is provided
 *
 * @param test data aaray
 * @param SIZE1 size of data array
 * 
 * @return unsigned char
 */
unsigned char find_maximum(unsigned char test[]);

/**
 * @brief find minimum value from the elements of data array 
 *
 * 
 * Given a char data array and size of data array is provided
 *
 * @param test data aaray
 * @param SIZE1 size of data array
 * 
 * @return unsigned char
 */
unsigned char find_minimum(unsigned char test[],unsigned int SIZE1);


#endif /* __STATS_H__ */

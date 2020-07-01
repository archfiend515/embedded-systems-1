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
 * @file stats.h
 * @brief .h file for ststistical analysis of data
 *
 * <Add Extended Description Here>
 *
 * @author Aswin M
 * @date July 1st 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(unsigned char array[], unsigned int length);
/**
 * @brief A function that prints the statistics of an array: minimum, maximum, mean, and median.
 *
 * @param array array containing the data
 * @param length The length of the array
 *
 * @return NULL
 */


void print_array(unsigned char array[], unsigned int length);
/**
 * @brief  Prints the array on the screen
 *
 * @param array array containing the data	
 * @param length The length of the array
 *
 * @return NULL
 */


unsigned char find_median(unsigned char array[], unsigned int length);
/** 
 * @brief Returns the median value of the array
 *
 * @param array array containing the data
 * @param length The length of the array
 *
 * @return median The median of the array
 */


unsigned char find_mean(unsigned char array[], unsigned int length);
/** 
 * @brief Returns the minimum value of the array
 *
 * @param array array containing the data
 * @param length The length of the array
 *
 * @return mean The min of the array
 */


unsigned char find_max(unsigned char array[], unsigned int length);
/** 
 * @brief Returns the maximum value of the array
 *
 * @param array array containing the data
 * @param length The length of the array
 *
 * @return max The max of the array
 */


unsigned char find_min(unsigned char array[], unsigned int length);
/** 
 * @brief Given an array of data and a length, returns the mean value
 *
 * @param array array containing the data
 * @param length The length of the array
 *
 * @return min The mean of the array
 */


void sort_array(unsigned char array[], unsigned int length);
/** 
 * @brief Sorts the array using selection sort
 *
 * @param array array containing the data
 * @param length The length of the array
 */



#endif /* __STATS_H__ */

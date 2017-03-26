/*
 * time.c
 *
 *  Created on: 20.03.2017
 *      Author: Najagra
 */
#include <stdio.h>
#include <time.h>

void time_sample(void)
{
	time_t max_time_val = 0x7FFFFFFF;

	printf("int - long - long long: %lu %lu %lu \n", sizeof(int), sizeof(long), sizeof(long long));
	printf("time_t max: %s \n", ctime(&max_time_val));
}

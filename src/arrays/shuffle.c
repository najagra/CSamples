/*
 * shuffle.c
 *
 *  Created on: 19.03.2017
 *      Author: Najagra
 */

#include <stdio.h>
#include <stdlib.h>

#include "../../array_samples.h"

#define ARRAY_SIZE 100
#define ROW_SIZE   10
#define SEED       0

static void array_initialize(int *array)
{
	for ( int i=0 ; i<ARRAY_SIZE ; i++ )
		array[i] = SEED + i;
}

static void array_printout(int *array)
{
	for ( int i=0 ; i<ARRAY_SIZE ; i++ )
		for ( int j=0 ; j<ROW_SIZE ; j++ )
		{
			printf("[%04d] = %04d", i+j, array[i+j]);
			if ( j == ROW_SIZE-1 )
			{
				printf("\n");
				i += ROW_SIZE-1;
			}
			else
				printf(" ; ");
		}
}

/* http://stackoverflow.com/questions/6127503/shuffle-array-in-c
 * http://benpfaff.org/writings/clc/shuffle.html
 *
 * http://stackoverflow.com/questions/33380282/how-does-rand-work-in-c
 * http://stackoverflow.com/questions/2999075/generate-a-random-number-within-range/2999130#2999130
 * http://stackoverflow.com/questions/288739/generate-random-numbers-uniformly-over-an-entire-range/288869#288869
 *
 * http://www.cprogramming.com/tutorial/random.html
 */

static void array_shuffle(int *array)
{
	if ( ARRAY_SIZE > 2 )
	{
		for ( int i=0; i<ARRAY_SIZE; i++ )
		{
	          int j = i + rand() / (RAND_MAX / (ARRAY_SIZE - i) + 1);
	          int t = array[j];
	          array[j] = array[i];
	          array[i] = t;
		}
	}
}

void array_shuffle_sample(void)
{
	int array[ARRAY_SIZE];

	array_initialize(array);
	array_printout  (array);
	array_shuffle   (array);
	printf("Shuffled:\n");
	array_printout  (array);
}

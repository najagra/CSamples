/*
 * simple_arrays.c
 *
 *  Created on: 23.03.2017
 *      Author: najagra
 */

#include <stdio.h>
#include <stdlib.h>

#include "../../array_samples.h"

#define ARRAY_LENGTH 10

enum PTYPE { PINT = 1, PCHAR = 2 };

/*
 * Static arrays
 */

int  s_array_01[ARRAY_LENGTH] = { 1, 2, 3, 4, 5 };
char s_array_02[ARRAY_LENGTH] = { 'a', 'b' };

static void print_an_array(void *array, int array_type, int array_length)
{
	for ( int i=0 ; i<array_length ; i++ )
	{
		switch ( array_type )
		{
			case 1: printf("[%d] = %p = %d\n", i, &(( int*)array)[i], *(( int*)array+i) ); break;
			case 2: printf("[%d] = %p = %c\n", i, &((char*)array)[i], *((char*)array+i) ); break;
		}
	}
}

void run_simple_arrays()
{
	print_an_array(s_array_01,  PINT, ARRAY_LENGTH);
	print_an_array(s_array_02, PCHAR, ARRAY_LENGTH);
}

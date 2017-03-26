/*
 * simple_arrays.c
 *
 *  Created on: 23.03.2017
 *      Author: najagra
 */

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 10

typedef enum _PTYPE { PINT = 1, PCHAR = 2 } PTYPE;

int  s_array_01[ARRAY_LENGTH] = { 1, 2, 3, 4, 5 };
char s_array_02[ARRAY_LENGTH] = { 'a', 'b' };

int test_array[] = { 1, 2, 3, 4, 5, 6 };

static void print_an_array(void *array, PTYPE array_type, int array_length)
{
	for ( int i=0 ; i<array_length ; i++ )
	{
		switch ( array_type )
		{
			case PINT : printf("[%d] = %p = %d\n", i, &(( int*)array)[i], *(( int*)array+i) ); break;
			case PCHAR: printf("[%d] = %p = %c\n", i, &((char*)array)[i], *((char*)array+i) ); break;
		}
	}
}

void run_simple_arrays()
{
	print_an_array(s_array_01,  PINT, ARRAY_LENGTH);
	print_an_array(s_array_02, PCHAR, ARRAY_LENGTH);

	printf("Test array size: %zu bytes\n", sizeof test_array);
	printf("Number of elements: %zu\n", sizeof(test_array)/sizeof(test_array[0]));

	int multi_array[4][4][4][4];

	printf("Test array size: %zu bytes\n", sizeof multi_array);
	printf("Number of elements: %zu\n", sizeof(multi_array)/sizeof(multi_array[0][0][0][0]));

	int an_array[4] = {7};
	print_an_array(an_array,  PINT, sizeof(an_array)/sizeof(int));

	size_t array_size;

	printf("Array size:");
	int result = scanf("%zd", &array_size);

	if ( result != EOF )
	{
		int array_var_size[array_size];
		print_an_array(array_var_size,  PINT, sizeof(array_var_size)/sizeof(int));
	}
}

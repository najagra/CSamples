/*
 * main.c
 *
 *  Created on: 19.03.2017
 *      Author: Najagra
 */

#include <stdio.h>
#include <stdlib.h>

#include "samples.h"

#define AVOID_INTERACTION 1

int main(void)
{
	array_shuffle_sample();

	time_sample();

	lists_samples();

	test_simple_types();

	do_some_math();

	if ( !AVOID_INTERACTION )
	{
		calculate_avg_hourly_pay_rate();
		simple_calculator();
		run_simple_arrays();
	}

	run_simple_strings();

	game_of_pointers();

    return EXIT_SUCCESS;
}

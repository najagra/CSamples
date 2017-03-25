/*
 * main.c
 *
 *  Created on: 19.03.2017
 *      Author: Najagra
 */

#include <stdio.h>
#include <stdlib.h>

#include "array_samples.h"
#include "time_samples.h"
#include "lists_samples.h"
#include "guidelines.h"

#define AVOID_INTERACTION 1


int main(void)
{
	array_shuffle_sample();

	time_sample();

	lists_samples();

	run_simple_arrays();

	test_simple_types();

	do_some_math();

	if ( !AVOID_INTERACTION )
	{
		calculate_avg_hourly_pay_rate();
		simple_calculator();
	}

    return EXIT_SUCCESS;
}

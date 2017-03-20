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

#define AVOID_INTERACTION 1

static void sum(int *a, int *b)
{
	*a += *b;
}

static void scanf_sample(void)
{
    int i = 0;
    int j = 5;

    printf("Get item: ");

    fflush(stdout);

    scanf("%d", &i);
    printf("%d\n", i);

    sum(&i, &j);

    printf("%d\n", i);
}

int main(void)
{
	if ( !AVOID_INTERACTION )
		scanf_sample();

	array_shuffle_sample();

	time_sample();

	lists_samples();

    return EXIT_SUCCESS;
}

/*
 * main.c
 *
 *  Created on: 19.03.2017
 *      Author: Najagra
 */

#include <stdio.h>

int main( void )
{

	int i = 0;

	printf("Get item: ");

    fflush(stdout);

	scanf("%d", &i);

	printf("%d\n", i);

	return 0;

}

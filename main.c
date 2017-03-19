/*
 * main.c
 *
 *  Created on: 19.03.2017
 *      Author: Najagra
 */

#include <stdio.h>

static void sum(int *a, int *b)
{
	*a += *b;
}

int main( void )
{

    int i = 0;
    int j = 5;

    printf("Get item: ");

    fflush(stdout);

    scanf("%d", &i);
    printf("%d\n", i);

    sum(&i, &j);

    printf("%d\n", i);

    return 0;

}

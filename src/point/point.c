#include <stdio.h>
#include <stdlib.h>

void game_of_pointers()
{

	/*
	 * a constant pointer that points to a value that is also constant
	 *
	 *
	 */

	int a = 5;

	int b = 15;

	const int *const pa = &a;

	printf("%p -> %d\n", pa, *pa);

	/*
	 * error: assignment of read-only location ‘*pa’
	 *
	 * *pa = 6;
	 */

	a = 6;

	printf("%p -> %d\n", pa, *pa);

	/*
	 * error: assignment of read-only variable ‘pa’
	 *
	 * pa = &b;
	 */




	/*
	 * the address stored must not be changed
	 *
	 *
	 */

	int *const pa2 = &a;

	printf("%p -> %d\n", pa2, *pa2);

	*pa2 = 100;

	printf("%p -> %d\n", pa2, *pa2);

	/*
	 * error: assignment of read-only variable ‘pa’
	 *
	 * pa2 = &b;
	 */




	/*
	 * the value stored must not be changed
	 *
	 *
	 */

	const int *pa3 = &a;

	printf("%p -> %d\n", pa3, *pa3);

	/*
	 * error: assignment of read-only location ‘*pa3’
	 *
	 * *pa3 = 100;
	 */

	pa3 = &b;

	printf("%p -> %d\n", pa3, *pa3);
}

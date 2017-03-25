/*
 * guidlines.c
 *
 *  Created on: 25.03.2017
 *      Author: najagra
 */

#include <stdio.h>

#define PRINT(a) printf("%c\n", a);

void test_const()
{
	const unsigned char u_char = 'A';

    /* Not allowed: assignment of read-only variable ‘u_char’
     * u_char = 'B';
     */

	PRINT(u_char)

	const unsigned char* ptr_u_char = &u_char;

    /* Not allowed: assignment of read-only location ‘*ptr_u_char’
     * *ptr_u_char = 'E';
     */

	PRINT(*ptr_u_char)

	unsigned char u_char_2 = 'B';

	u_char_2 = 'C';

	ptr_u_char = &u_char_2;

    /* Not allowed: assignment of read-only location ‘*ptr_u_char’
     * *ptr_u_char = 'E';
     */

	PRINT(*ptr_u_char)

}

void test_basic_types()
{
	signed char c;
	short int si;
	short s;
	int i;
	long int li;
	long l;

	/* Not allowed: long long int
	*long long ll;
	*/

	unsigned char uc;
	unsigned short int usi;
	unsigned short us;
	unsigned int ui;
	unsigned long int uli;
	unsigned long ul;

}


void test_simple_types()
{
	test_const();
}

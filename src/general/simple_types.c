/*
 * guidlines.c
 *
 *  Created on: 25.03.2017
 *      Author: najagra
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <ctype.h>
#include <stdbool.h>

#define PRINT(a) printf("%c\n", a);

enum Suit { Hearts=1, Diamonds, Clubs=5, Spades } Dama=Spades;
enum { Lion, Tiger=6 } As=Lion;

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

void test_int_types()
{
	signed char 		hhd	= SCHAR_MAX;
	short 				hd  = SHRT_MAX;		/* short int */
	int 				d   = INT_MAX;		/* long int  */
	long 				ld	= LONG_MAX;
	long long 			lld = LLONG_MAX;

	unsigned char 		hhu = UCHAR_MAX;;
	unsigned short 		hu  = USHRT_MAX;
	unsigned int 		u	= UINT_MAX;
	unsigned long 		lu	= ULONG_MAX;
	unsigned long long 	llu	= ULLONG_MAX;

	/*
	 *  Not allowed: long long int
	 *
	 *  Not defined: USHRT_MIN
	 */

	printf("Type: signed char ; size: %lu ; MAX: %hhd \n", sizeof(signed char),			hhd); /* or %c for char */
	printf("Type: signed short; size: %lu ; MAX: %hd  \n", sizeof(short),      			hd );
	printf("Type: signed int  ; size: %lu ; MAX: %d   \n", sizeof(int),         		d  );
	printf("Type: signed long ; size: %lu ; MAX: %ld  \n", sizeof(long),        		ld );
	printf("Type: signed llong; size: %lu ; MAX: %lld \n", sizeof(long long),  			lld);

	printf("Type: signed char ; size: %lu ; MAX: %hhu \n", sizeof(unsigned char), 		hhu);
	printf("Type: signed short; size: %lu ; MAX: %hu  \n", sizeof(unsigned short),      hu );
	printf("Type: signed int  ; size: %lu ; MAX: %u   \n", sizeof(unsigned int),        u  );
	printf("Type: signed long ; size: %lu ; MAX: %lu  \n", sizeof(unsigned long),       lu );
	printf("Type: signed llong; size: %lu ; MAX: %llu \n", sizeof(unsigned long long),  llu);

	ld 	= 100L;
	lld	= 100LL;

	u 	= 5U;
	lu	= 5LU;
	llu	= 5LLU;
}

void test_float_types()
{
	float  		f;
	double 		d;
	long double ld;

	f = 1.7678F;
	d = 1E-5;
	ld= 2E+34L;

	printf("Type: float  ; size: %lu ; VALUE: %f \n", sizeof(float),  f);

	printf("Type: double ; size: %lu ; VALUE: %e \n", sizeof(double), d);
	printf("Type: double ; size: %lu ; VALUE: %f \n", sizeof(double), d);
	printf("Type: double ; size: %lu ; VALUE: %g \n", sizeof(double), d);

	printf("Type: long double ; size: %lu ; VALUE: %Le \n", sizeof(long double), ld);	/* width.precision modifier e.g. %10.2Lf */
	printf("Type: long double ; size: %lu ; VALUE: %Lf \n", sizeof(long double), ld);	/* left-aligned %-10f ; same for any int */
	printf("Type: long double ; size: %lu ; VALUE: %Lg \n", sizeof(long double), ld);

	f  = FLT_MAX;
	d  = DBL_MAX;
	ld = LDBL_MAX;

	printf("Type: float  ; size: %lu ; MAX: %f \n", sizeof(float),  f);
	printf("Type: float  ; size: %lu ; MAX: %g \n", sizeof(float),  f);
	printf("Type: double ; size: %lu ; MAX: %f \n", sizeof(double), d);
	printf("Type: double ; size: %lu ; MAX: %g \n", sizeof(double), d);
	printf("Type: long double ; size: %lu ; MAX: %Lf \n", sizeof(long double), ld);
	printf("Type: long double ; size: %lu ; MAX: %Lg \n", sizeof(long double), ld);
}

void sum(float *a, float *b)
{
	*a += *b;
}

float sum_by_val(float a, float b)
{
	return a+=b;
}

void char_games()
{
	char c1 = 'A' + 1;
	char c2 = 'C', c3 = 'T';

	printf("Chars: %c %c %c\n", c1, c2, tolower(c3) ); /* toupper() */
	printf("Chars: %d %d %d\n", c1, c2, tolower(c3) );
}

void test_simple_types()
{
	test_const();
	test_int_types();
	test_float_types();
	float a = 5.00F;
	float b = 6.11F;
	sum (&a, &b);
	printf("Sum: %10.2f\n", a);
	printf("Sum: %10.2f\n", sum_by_val(2.0F, 3.45F));
	char_games();
	if (As == Spades || Dama == Tiger){
		printf("Dobra karta\n");
	}
	_Bool condition = 6;
	bool condition_2 = true; /* stdbool.h */
	if (condition && condition_2)
	{
		printf("Dobry warunek\n");
	}
}

/*
 * math.c
 *
 *  Created on: 25.03.2017
 *      Author: najagra
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

void do_some_math()
{
	double d1 = 2.067;

	printf("Floor %f => %f\n", d1,floor(d1));

	printf("Ceil  %f => %f\n", d1, ceil(d1));

	d1 = -3.0567;

	printf("ABS  %f => %f\n", d1,  fabs(d1));

	d1 = 10.00;

	printf("Log   %f => %f\n", d1,  log(d1));

	printf("Log10 %f => %f\n", d1,log10(d1));

	printf("Exp   %f => %f\n", d1,  exp(d1));

	printf("Sqrt  %f => %f\n", d1, sqrt(d1));

	printf("Pow   %f => %f\n", d1, pow(d1,4));

	double angle = 45.0;                        // Angle in degrees
	double pi = 3.14159265;
	double sine = 0.0;
	double cosine = 0.0;
	sine = sin(pi*angle/180.0);                 // Angle converted to radians
	cosine = sin(pi*angle/180.0);               // Angle converted to radians

	printf("%f - %f\n", sine, cosine);
}

void calculate_avg_hourly_pay_rate()
{
	int results;
	float weekly_amount = 0.0F;
	printf("Weekly pay in dollars?");
	results = scanf("%f", &weekly_amount);
	if (results != EOF)
	{
		float hours_worked = 0.0F;
		printf("OK\nHours worked?");
		results = scanf("%f", &hours_worked);
		printf("OK\n");
		if(results != EOF)
		{
			printf("Your average hourly pay rate is %d dollars and %d cents.\n",
					(int)( weekly_amount / hours_worked ),
					(int)( 100 * ( weekly_amount / hours_worked - (int)( weekly_amount / hours_worked ) ) ) );
		}
	}
}



/*
 * simple_strings.c
 *
 *  Created on: 26.03.2017
 *      Author: najagra
 */

#include <stdio.h>
#include <string.h>

void run_simple_strings()
{
	#if defined __STDC_LIB_EXT1__
	  printf("Optional functions are defined.\n");
	#else
	  printf("Optional functions are not defined.\n");
	#endif

  	char brands[3][20] = {
  			"Mercedes",
			"Audi",
			"BMW"
  	};

  	/*
  	 * STRLEN
  	 *
  	 */

  	int s=0;
  	while(brands[0][s])
  		s++;
  	printf("%s : %d\n", brands[0], s);

  	/*
  	 * STRLEN <string.h>
  	 *
  	 */

  	for ( unsigned int i=0 ; i<( sizeof brands / sizeof(brands[0]) ) ; i++ )
  	{
  		printf("%s : %zu\n", brands[i], strlen(brands[i]) );
  	}

  	/*
  	 * STRCPY and STRNCPY <string.h>
  	 * http://man7.org/linux/man-pages/man3/strcpy.3.html
  	 */

  	char names[3][20];

  	for ( unsigned int i=0 ; i<( sizeof brands / sizeof(brands[0]) ) ; i++ )
  	{
  		strcpy(names[i], brands[i]);

  		printf("%s : %zu\n", names[i], strlen(names[i]) );
  	}

  	/*
  	 * http://stackoverflow.com/questions/8107826/proper-way-to-empty-a-c-string
  	 */

  	memset( names, 0, sizeof(names) );

  	for ( unsigned int i=0 ; i<( sizeof brands / sizeof(brands[0]) ) ; i++ )
  	{
  		strncpy(names[i], brands[i], 2);

  		printf("%s : %zu\n", names[i], strlen(names[i]) );
  	}

  	/*
  	 * STRCAT and STRNCAT <string.h>
  	 * http://man7.org/linux/man-pages/man3/strcat.3.html
  	 */

  	for ( unsigned int i=0 ; i<( sizeof brands / sizeof(brands[0]) ) ; i++ )
  	{
  		strcat(names[i], brands[i]);

  		printf("%s : %zu\n", names[i], strlen(names[i]) );
  	}

  	for ( unsigned int i=0 ; i<( sizeof brands / sizeof(brands[0]) ) ; i++ )
  	{
  		strncat(names[i], brands[i], 3);

  		printf("%s : %zu\n", names[i], strlen(names[i]) );
  	}

}

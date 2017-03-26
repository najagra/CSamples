/*
 * lists.c
 *
 *  Created on: 20.03.2017
 *      Author: najagra
 */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void add_point_to_list_tail(element **head, point *p)
{
	element *el = ( element* ) malloc ( sizeof ( element ) );

	el->item = ( point* ) malloc ( sizeof ( point ) );
	el->item->x = p->x;
	el->item->y = p->y;
	el->next = NULL;

	if ( *head == NULL )
	{
		*head = el;
	}
	else
	{
		element *tail = *head;

		while( tail->next != NULL )
		{
			tail = tail->next;
		}

		tail->next = el;
	}
}

void reverse_the_list(element **head, element **new_head)
{
	if ( *head != NULL )
	{
		element *el = *head;
		element *prev_element = NULL;

		while ( el != NULL )
		{
			*new_head = ( element* ) malloc ( sizeof ( element ) );

			(*new_head)->item = ( point* ) malloc ( sizeof ( point ) );
			(*new_head)->item->x = el->item->x;
			(*new_head)->item->y = el->item->y;
			(*new_head)->next = prev_element;

			prev_element = *new_head;
			el = el->next;
		}
	}
	else
		return;
}

void print_all_points_from_list(element **head)
{
	if ( *head != NULL )
	{
		element *el = *head;

		do
		{
			printf( "(%d ; %d)\n", el->item->x, el->item->y );
			el = el->next;
		}
		while( el != NULL );
	}
	else
		return;
}

void delete_list(element **head)
{
	if ( *head != NULL )
	{
		do
		{
			element *el = *head;
			*head = (*head)->next;
			free(el->item);
			free(el);
		}
		while( *head != NULL );
	}
	else
		return;
}

void lists_samples()
{
	element *head_one = NULL;
	element *head_two = NULL;

	element *head_one_reversed = NULL;

	point p1 = { 2, 3 };
	point p2 = { 4, 5 };
	point p3 = { 6, 7 };

	add_point_to_list_tail(&head_one, &p1);
	add_point_to_list_tail(&head_one, &p2);
	add_point_to_list_tail(&head_one, &p3);

	add_point_to_list_tail(&head_two, &p3);
	add_point_to_list_tail(&head_two, &p2);
	add_point_to_list_tail(&head_two, &p1);

	reverse_the_list(&head_one, &head_one_reversed);

	printf("Reg #1\n");
	print_all_points_from_list(&head_one);

	printf("Reg #2\n");
	print_all_points_from_list(&head_two);

	printf("Reversed #1\n");
	print_all_points_from_list(&head_one_reversed);

	delete_list(&head_one);
	delete_list(&head_two);
	delete_list(&head_one_reversed);
}

/*
 * lists.c
 *
 *  Created on: 20.03.2017
 *      Author: najagra
 */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void add_point_to_list_tail(struct element **head, struct point *p)
{
	struct element *el = ( struct element* ) malloc ( sizeof ( struct element ) );

	el->item = p;
	el->next = NULL;

	if ( *head == NULL )
	{
		*head = el;
	}
	else
	{
		struct element *tail = *head;

		while( tail->next != NULL )
		{
			tail = tail->next;
		}

		tail->next = el;
	}
}

void print_all_points_from_list(struct element **head)
{
	if ( *head != NULL )
	{
		struct element *el = *head;

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

void delete_list(struct element **head)
{
	if ( *head != NULL )
	{
		do
		{
			struct element *el = *head;
			*head = (*head)->next;
			free(el);
		}
		while( *head != NULL );
	}
	else
		return;
}

void lists_samples(void)
{
	struct element *head_one = NULL;
	struct element *head_two = NULL;

	struct point p1 = { 2, 3 };
	struct point p2 = { 4, 5 };
	struct point p3 = { 6, 7 };

	add_point_to_list_tail(&head_one, &p1);
	add_point_to_list_tail(&head_one, &p2);
	add_point_to_list_tail(&head_one, &p3);

	add_point_to_list_tail(&head_two, &p3);
	add_point_to_list_tail(&head_two, &p2);
	add_point_to_list_tail(&head_two, &p1);

	print_all_points_from_list(&head_one);
	print_all_points_from_list(&head_two);

	delete_list(&head_one);
	delete_list(&head_two);
}

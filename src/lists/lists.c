/*
 * lists.c
 *
 *  Created on: 20.03.2017
 *      Author: najagra
 */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

static void add_point_to_list(struct point *p)
{
	struct element *el = (struct element*)malloc(sizeof(struct element));

	el->item = p;
	el->next = NULL;

	if (head==NULL)
	{
		head = el;
		tail = head;
	}
	else
	{
		tail->next = el;
		tail = el;
	}
}

static void print_all_points_from_list()
{
	struct element *el;

	if (head != NULL)
	{
		el = head;
		printf("(%d ; %d)\n", el->item->x, el->item->y);
	}
	else
		return;

	while(el->next != NULL)
	{
		el = el->next;
		printf("(%d ; %d)\n", el->item->x, el->item->y);
	}
}

static void delete_list()
{
	struct element *el;

	if (head != NULL)
	{
		do
		{
			el = head;
			head = head->next;
			free(el);
		}
		while(head != NULL);
	}
	else
		return;

	head = NULL;
	tail = NULL;
}

void test_struct_param_by_value(struct point p)
{
	printf("(%d ; %d)\n", p.x, p.y);
	p.x = 100;
}

void lists_samples(void)
{
	head = NULL;
	tail = NULL;

	struct point p1 = { 2, 3 };
	struct point p2 = { 4, 5 };
	struct point p3 = { 6, 7 };

	test_struct_param_by_value(p1);

	add_point_to_list(&p1);
	add_point_to_list(&p2);
	add_point_to_list(&p3);

	print_all_points_from_list();

	delete_list();
}

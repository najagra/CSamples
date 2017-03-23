/*
 * lists.h
 *
 *  Created on: 20.03.2017
 *      Author: najagra
 */

#ifndef SRC_LISTS_LISTS_H_
#define SRC_LISTS_LISTS_H_

typedef struct _point
{
	int x;
	int y;
} point;

/*
 * struct _element contains ptr to itself
 */

typedef struct _element element;

struct _element
{
	point *item;
	element *next;
};

void add_point_to_list_tail(element **head, point *p);
void reverse_the_list(element **head, element **new_head);
void print_all_points_from_list(element **head);
void delete_list(element **head);

void lists_samples(void);

#endif /* SRC_LISTS_LISTS_H_ */

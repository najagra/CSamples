/*
 * lists.h
 *
 *  Created on: 20.03.2017
 *      Author: najagra
 */

#ifndef SRC_LISTS_LISTS_H_
#define SRC_LISTS_LISTS_H_

struct point
{
	int x;
	int y;
};

struct element
{
	struct point *item;
	struct element *next;
};

void add_point_to_list_tail(struct element **head, struct point *p);
void reverse_the_list(struct element **head, struct element **new_head);
void print_all_points_from_list(struct element **head);
void delete_list(struct element **head);

void lists_samples(void);

#endif /* SRC_LISTS_LISTS_H_ */

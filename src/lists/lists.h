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

struct element *head;
struct element *tail;

void lists_samples(void);

#endif /* SRC_LISTS_LISTS_H_ */

/*
 * main.c
 *
 *  Created on: 2019Äê10ÔÂ9ÈÕ
 */

#include <stdio.h>
#include <stdlib.h>

#include "adlist.h"

typedef struct S {
	int id;
} S;

int main() {
	list * my_list = listCreate();
	S* s = NULL;
	for (int id = 0; id < 10; ++id) {
		s = malloc(size(*s));
		if (s == NULL) {
			printf("out of memory");
			return -1;
		}
		s->id = id;
		if(listAddNodeTail(my_list, s) == NULL){
			printf("adding node to tail of the list fails");
			return -1;
		}
	}
	return 0;
}

/*
 * bit_vect.c - a bit vector struct
 *
 */

#include "bit_vect.h"
#include <stdio.h>

// static int* bv;
// static int nxt;
// static size_t size;

unsigned* init_bv(size_t s) {
	if (s < 0 || s > 0x40000000) {
		fprintf(stderr, "Too big bit vector.");
		exit(1);
	}
	size_t size = s/sizeof(int);
	unsigned *res = (unsigned*) malloc(size);
	if (! res) {
		fprintf(stderr, "Unable to allocate %zu ints.", size);
		exit(2);
	}
	int i;
	for (i = 0; i < size; i++) res[i] = 0;
	nxt = 2;
	return res;
}

unsigned get_bv(unsigned idx) { return 0; }
void set_bv(unsigned idx) { }


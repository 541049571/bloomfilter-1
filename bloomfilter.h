#ifndef __BLOOMFILTER_H__
#define __BLOOMFILTER_H__

#include <stdlib.h>

struct bloomfilter {
	unsigned int  bit_size;
	unsigned char bitarray[1];
};

void
bloomfilter_init(struct bloomfilter *bloomfilter);

void
bloomfilter_set(struct bloomfilter *bloomfilter, char key[], size_t len);

int
bloomfilter_get(struct bloomfilter *bloomfilter, char key[], size_t len);


#endif /* __BLOOMFILTER_H__ */

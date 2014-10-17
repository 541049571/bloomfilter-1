#include <stdio.h>
#include <stdlib.h>

#include "bloomfilter.h"

int
main(void)
{
        int i;
        struct bloomfilter *bloomfilter;

        bloomfilter = malloc(sizeof(struct bloomfilter) + 1000);
        bloomfilter_init(bloomfilter, 1000 << 3);

        bloomfilter_set(bloomfilter, "a", 1);
        bloomfilter_set(bloomfilter, "b", 1);
        for (i = 'a'; i < 'z'; i++) {
                char foo[1];
                foo[0] = i;
                printf("%d\n", bloomfilter_get(bloomfilter, foo, sizeof(foo)));
        }
}
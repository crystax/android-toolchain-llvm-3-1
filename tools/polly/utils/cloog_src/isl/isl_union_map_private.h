#define isl_union_set	isl_union_map
#include <isl/union_map.h>

struct isl_union_map {
	int ref;
	isl_space *dim;

	struct isl_hash_table	table;
};

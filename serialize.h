#include "buffer.h"

#ifndef HEADER_SERIALIZE
#define HEADER_SERIALIZE

void serialize_int(Buffer *b, int n);
void deserialize_int(Buffer *b, int *n);

#endif
#include "buffer.h"
#include "data.h"

#ifndef HEADER_BIGDATA
#define HEADER_BIGDATA

typedef struct BigData {
  Data a;
  Data b;
} BigData;

void serialize_bigdata(Buffer *b, BigData *bd);
void deserialize_bigdata(Buffer *b, BigData *bd);

#endif
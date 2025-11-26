#include "buffer.h"

#ifndef HEADER_DATA
#define HEADER_DATA

typedef struct Data {
  int a;
  int b;
} Data;

void serialize_data(Buffer *b, Data *d);
void deserialize_data(Buffer *b, Data *d);

#endif
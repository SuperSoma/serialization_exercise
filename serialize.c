#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "buffer.h"
#include "serialize.h"

void serialize_int(Buffer *b, int n) {

  buffer_extend(b, sizeof(int));
  memcpy(b->data + b->next, &n, sizeof(int));
  b->next += sizeof(int);
}

void deserialize_int(Buffer *b, int *n) {
  memcpy(n, b->data + b->next, sizeof(int));
  b->next += sizeof(int);
}
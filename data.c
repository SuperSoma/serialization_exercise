#include <stdio.h>
#include <stdlib.h>
#include "buffer.h"
#include "serialize.h"
#include "data.h"

void serialize_data(Buffer *b, Data *d) {
  serialize_int(b, d->a);
  serialize_int(b, d->b);
}

void deserialize_data(Buffer *b, Data *d) {
  deserialize_int(b, &(d->a));
  deserialize_int(b, &(d->b));
}
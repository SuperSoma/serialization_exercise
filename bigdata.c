#include <stdio.h>
#include <stdlib.h>
#include "buffer.h"
#include "serialize.h"
#include "data.h"
#include "bigdata.h"

void serialize_bigdata(Buffer *b, BigData *bd) {
  serialize_data(b, &(bd->a));
  serialize_data(b, &(bd->b));
}

void deserialize_bigdata(Buffer *b, BigData *bd) {
  deserialize_data(b, &(bd->a));
  deserialize_data(b, &(bd->b));
}
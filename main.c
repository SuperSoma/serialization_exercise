#include <stdio.h>
#include <stdlib.h>
#include "buffer.h"
#include "data.h"

int main(int argc, char **argv) {

  Data d;
  d.a = 47;
  d.b = 9452;

  Data dd;
  dd.a = 1;
  dd.b = 2;

  Buffer *buf = buffer_new();
  printf("Size of Buffer: %d\n", buf->size);

  serialize_data(buf, &d);

  printf("Size of Buffer: %d\n", buf->size);

  char *p = buf->data;

  for (size_t i=0; i < buf->next; i++) {
    printf("%X", p[i]);
  }

  buf->next = 0; //reset offset counter for the example. normally would load into buffer from storage and then start deserialization
  deserialize_data(buf, &dd);

  printf("\nD2 a: %d b: %d", dd.a, dd.b);

  return 0;
}
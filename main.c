#include <stdio.h>
#include <stdlib.h>
#include "buffer.h"
#include "data.h"
#include "bigdata.h"

int main(int argc, char **argv) {

  Data d;
  d.a = 47;
  d.b = 9452;

  Data dd;
  dd.a = 1;
  dd.b = 2;

  BigData bd;
  bd.a = d;
  bd.b = dd;

  printf("D a: %d b: %d\n", bd.a.a, bd.a.b);
  printf("D a: %d b: %d\n", bd.b.a, bd.b.b);

  Buffer *buf = buffer_new();
  printf("Size of Buffer: %d\n", buf->size);

  serialize_bigdata(buf, &bd);

  printf("Size of Buffer: %d\n", buf->size);

  char *p = buf->data;

  for (size_t i=0; i < buf->next; i++) {
    printf("%X", p[i]);
  }

  buf->next = 0; //reset offset counter for the example. normally would load into buffer from storage and then start deserialization
  deserialize_bigdata(buf, &bd);

  printf("\nD a: %d b: %d\n", bd.a.a, bd.a.b);
  printf("D a: %d b: %d\n", bd.b.a, bd.b.b);

  return 0;
}
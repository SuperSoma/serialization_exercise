#include <stdio.h>
#include <stdlib.h>
#include "buffer.h"

Buffer *buffer_new() {
  Buffer *new_buffer = malloc(sizeof(Buffer));

  new_buffer->data = malloc(INITIAL_SIZE);
  new_buffer->size = INITIAL_SIZE;
  new_buffer->next = 0;

  return new_buffer;
}

void buffer_extend(Buffer *b, size_t size) {
  while (b->next + size > b->size) {
    b->data = realloc(b->data, b->size * 2);
    b->size = b->size * 2;
  }
}

void buffer_destroy(Buffer **b) {
  free((*b)->data);
  free(*b);
  *b = NULL;
}
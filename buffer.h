#ifndef HEADER_BUFFER
#define HEADER_BUFFER

#define INITIAL_SIZE 4

typedef struct Buffer {
  void *data;
  size_t next; //offset for where the next bit of data will go
  size_t size;
} Buffer;

Buffer *buffer_new();
void buffer_extend(Buffer *b, size_t size);
void buffer_destroy(Buffer **b);

#endif
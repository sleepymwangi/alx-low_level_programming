0x0B. C - malloc, free
Memory allocation
The malloc() function allocates size bytes and returns a pointerto the allocated memory.  The memory is not initialized.  If size
is 0, then malloc() returns either NULL, or a unique pointer
value that can later be successfully passed to free().


The free() function frees the memory space pointed to by ptr,
which must have been returned by a previous call to malloc(),
calloc(), or realloc().  Otherwise, or if free(ptr) has already
been called before, undefined behavior occurs.  If ptr is NULL,
no operation is performed.

extern void *func_112740(int, int);
extern void *memset(void *, int, unsigned int);

void *func_112828(int count, int element_size)
{
    int bytes = count * element_size;
    void *result = func_112740(0x10, bytes);
    if (result != 0) {
        memset(result, 0, bytes);
    }
    return result;
}

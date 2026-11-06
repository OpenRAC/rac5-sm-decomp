extern void *func_0EF918(int, int);
extern void *memset(void *, int, unsigned int);

void *func_0EFA00(int count, int element_size)
{
    int bytes = count * element_size;
    void *result = func_0EF918(0x10, bytes);
    if (result != 0) {
        memset(result, 0, bytes);
    }
    return result;
}

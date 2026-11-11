extern void *func_101F18(int, int);
extern void *memset(void *, int, unsigned int);

void *func_102000(int count, int element_size)
{
    int bytes = count * element_size;
    void *result = func_101F18(0x10, bytes);
    if (result != 0) {
        memset(result, 0, bytes);
    }
    return result;
}

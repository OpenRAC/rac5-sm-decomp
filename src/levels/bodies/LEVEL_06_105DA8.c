extern void *func_105CC0(int, int);
extern void *memset(void *, int, unsigned int);

void *func_105DA8(int count, int element_size)
{
    int bytes = count * element_size;
    void *result = func_105CC0(0x10, bytes);
    if (result != 0) {
        memset(result, 0, bytes);
    }
    return result;
}

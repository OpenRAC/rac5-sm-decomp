extern void *func_0F0308(int, int);
extern void *memset(void *, int, unsigned int);

void *func_0F03F0(int count, int element_size)
{
    int bytes = count * element_size;
    void *result = func_0F0308(0x10, bytes);
    if (result != 0) {
        memset(result, 0, bytes);
    }
    return result;
}

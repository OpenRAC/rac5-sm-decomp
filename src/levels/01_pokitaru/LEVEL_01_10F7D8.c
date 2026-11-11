extern void *func_10F6F0(int, int);
extern void *memset(void *, int, unsigned int);

void *func_10F7D8(int count, int element_size)
{
    int bytes = count * element_size;
    void *result = func_10F6F0(0x10, bytes);
    if (result != 0) {
        memset(result, 0, bytes);
    }
    return result;
}

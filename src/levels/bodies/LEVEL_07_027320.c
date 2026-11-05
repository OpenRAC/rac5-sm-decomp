extern void * memset(void *, int, unsigned int);

void func_027320(void *memory, int count)
{
    memset(memory, 0, (unsigned int)count << 4);
}

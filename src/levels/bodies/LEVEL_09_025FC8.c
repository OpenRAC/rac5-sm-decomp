extern void * memset(void *, int, unsigned int);

void func_025FC8(void *memory, int count)
{
    memset(memory, 0, (unsigned int)count << 4);
}

void *malloc(unsigned int size);
void func_1410D8(void) __attribute__((noreturn));

void func_1411B8(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_1410D8();
    }
}

void *malloc(unsigned int size);
void func_18B4C8(void) __attribute__((noreturn));

void func_18B5A8(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_18B4C8();
    }
}

void *malloc(unsigned int size);
void func_0FA5B0(void) __attribute__((noreturn));

void func_0FA690(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_0FA5B0();
    }
}

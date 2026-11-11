void *malloc(unsigned int size);
void func_14B798(void) __attribute__((noreturn));

void func_14B878(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_14B798();
    }
}

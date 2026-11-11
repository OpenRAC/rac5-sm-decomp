void *malloc(unsigned int size);
void func_025168(void) __attribute__((noreturn));

void func_025248(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_025168();
    }
}

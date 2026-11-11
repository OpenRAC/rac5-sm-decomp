void *malloc(unsigned int size);
void func_200758(void) __attribute__((noreturn));

void __eh_alloc(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_200758();
    }
}

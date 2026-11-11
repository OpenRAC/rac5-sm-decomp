void *malloc(unsigned int size);
void func_1D6248(void) __attribute__((noreturn));

void func_1D6328(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_1D6248();
    }
}

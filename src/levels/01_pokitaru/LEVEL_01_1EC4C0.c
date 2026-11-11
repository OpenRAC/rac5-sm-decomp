void *malloc(unsigned int size);
void func_1EC3E0(void) __attribute__((noreturn));

void func_1EC4C0(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_1EC3E0();
    }
}

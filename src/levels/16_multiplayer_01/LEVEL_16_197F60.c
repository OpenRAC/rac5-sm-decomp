void *malloc(unsigned int size);
void func_197E80(void) __attribute__((noreturn));

void func_197F60(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_197E80();
    }
}

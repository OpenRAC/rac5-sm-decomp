void *malloc(unsigned int size);
void func_1BF820(void) __attribute__((noreturn));

void func_1BF900(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_1BF820();
    }
}

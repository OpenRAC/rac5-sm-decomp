void *malloc(unsigned int size);
void func_1DB7D8(void) __attribute__((noreturn));

void func_1DB8B8(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_1DB7D8();
    }
}

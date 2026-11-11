void *malloc(unsigned int size);
void func_1BD0B8(void) __attribute__((noreturn));

void func_1BD198(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_1BD0B8();
    }
}

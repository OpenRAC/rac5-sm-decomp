void *malloc(unsigned int size);
void func_1F5438(void) __attribute__((noreturn));

void func_1F5518(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_1F5438();
    }
}

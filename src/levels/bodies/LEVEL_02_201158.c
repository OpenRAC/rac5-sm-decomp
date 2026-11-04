void *malloc(unsigned int size);
void func_201078(void) __attribute__((noreturn));

void func_201158(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_201078();
    }
}

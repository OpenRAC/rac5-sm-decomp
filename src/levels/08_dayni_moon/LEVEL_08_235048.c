void *malloc(unsigned int size);
void func_234F68(void) __attribute__((noreturn));

void func_235048(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_234F68();
    }
}

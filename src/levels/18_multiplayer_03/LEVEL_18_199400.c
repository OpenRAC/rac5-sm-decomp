void *malloc(unsigned int size);
void func_199320(void) __attribute__((noreturn));

void func_199400(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_199320();
    }
}

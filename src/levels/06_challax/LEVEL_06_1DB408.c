void *malloc(unsigned int size);
void func_1DB328(void) __attribute__((noreturn));

void func_1DB408(unsigned int size)
{
    if (malloc(size) == 0)
    {
        func_1DB328();
    }
}

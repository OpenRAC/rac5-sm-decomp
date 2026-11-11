extern void *func_1010A8(unsigned int kind, int count);
extern int func_0918F8(void *value);

int func_101DB8(unsigned int kind, int count)
{
    void *value = func_1010A8(kind, count);
    return func_0918F8(value);
}

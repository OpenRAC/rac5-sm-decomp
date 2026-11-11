extern void func_188988(int);
void func_1889B0(int *slot)
{
    int value = *slot;
    if (value != 0) {
        func_188988(value);
        *slot = 0;
    }
}
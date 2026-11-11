extern void func_17DAF8(int);
void func_17DB20(int *slot)
{
    int value = *slot;
    if (value != 0) {
        func_17DAF8(value);
        *slot = 0;
    }
}
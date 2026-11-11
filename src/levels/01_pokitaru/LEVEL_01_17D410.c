extern void func_17D3E8(int);
void func_17D410(int *slot)
{
    int value = *slot;
    if (value != 0) {
        func_17D3E8(value);
        *slot = 0;
    }
}
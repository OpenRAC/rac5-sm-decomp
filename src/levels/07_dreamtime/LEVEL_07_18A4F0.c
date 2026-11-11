extern void func_18A4C8(int);
void func_18A4F0(int *slot)
{
    int value = *slot;
    if (value != 0) {
        func_18A4C8(value);
        *slot = 0;
    }
}
extern void func_170E78(int);
void func_170EA0(int *slot)
{
    int value = *slot;
    if (value != 0) {
        func_170E78(value);
        *slot = 0;
    }
}
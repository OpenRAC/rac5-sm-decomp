extern void func_17FA28(int);
void func_17FA50(int *slot)
{
    int value = *slot;
    if (value != 0) {
        func_17FA28(value);
        *slot = 0;
    }
}
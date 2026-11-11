extern void func_19FC60(int);
void func_19FC88(int *slot)
{
    int value = *slot;
    if (value != 0) {
        func_19FC60(value);
        *slot = 0;
    }
}
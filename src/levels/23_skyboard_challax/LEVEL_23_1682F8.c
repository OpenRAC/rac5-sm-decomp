extern void func_1682D0(int);
void func_1682F8(int *slot)
{
    int value = *slot;
    if (value != 0) {
        func_1682D0(value);
        *slot = 0;
    }
}
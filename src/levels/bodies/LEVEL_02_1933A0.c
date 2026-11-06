extern void func_193378(int);
void func_1933A0(int *slot)
{
    int value = *slot;
    if (value != 0) {
        func_193378(value);
        *slot = 0;
    }
}
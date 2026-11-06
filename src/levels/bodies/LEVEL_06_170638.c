extern void func_170610(int);
void func_170638(int *slot)
{
    int value = *slot;
    if (value != 0) {
        func_170610(value);
        *slot = 0;
    }
}
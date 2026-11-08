extern int func_0AD2B0(unsigned int value);
extern char D_0020C020[];

int func_0AD508(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_0AD2B0(slot) == 0)
        return 0;
    value = *(int **)(D_0020C020 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

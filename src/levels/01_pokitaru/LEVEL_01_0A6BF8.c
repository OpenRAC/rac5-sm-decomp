extern int func_0A69A0(unsigned int value);
extern char D_001F7060[];

int func_0A6BF8(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_0A69A0(slot) == 0)
        return 0;
    value = *(int **)(D_001F7060 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

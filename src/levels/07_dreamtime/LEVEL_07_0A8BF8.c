extern int func_0A89A0(unsigned int value);
extern char D_0020B360[];

int func_0A8BF8(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_0A89A0(slot) == 0)
        return 0;
    value = *(int **)(D_0020B360 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

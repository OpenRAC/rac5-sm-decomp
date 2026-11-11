extern int func_0A6720(unsigned int value);
extern char D_0020F6E0[];

int func_0A6978(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_0A6720(slot) == 0)
        return 0;
    value = *(int **)(D_0020F6E0 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

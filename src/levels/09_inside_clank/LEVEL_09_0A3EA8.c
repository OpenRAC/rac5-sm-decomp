extern int func_0A3C50(unsigned int value);
extern char D_001E0E60[];

int func_0A3EA8(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_0A3C50(slot) == 0)
        return 0;
    value = *(int **)(D_001E0E60 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

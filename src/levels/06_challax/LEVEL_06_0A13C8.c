extern int func_0A1170(unsigned int value);
extern char D_001E5F60[];

int func_0A13C8(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_0A1170(slot) == 0)
        return 0;
    value = *(int **)(D_001E5F60 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

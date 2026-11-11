extern int func_094FB0(unsigned int value);
extern char D_001563E0[];

int func_095208(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_094FB0(slot) == 0)
        return 0;
    value = *(int **)(D_001563E0 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

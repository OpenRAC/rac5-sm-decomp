extern int func_0B1298(unsigned int value);
extern char D_0023FF20[];

int func_0B14F0(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_0B1298(slot) == 0)
        return 0;
    value = *(int **)(D_0023FF20 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

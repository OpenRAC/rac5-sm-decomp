extern int func_0ABBB0(unsigned int value);
extern char D_00210520[];

int func_0ABE08(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_0ABBB0(slot) == 0)
        return 0;
    value = *(int **)(D_00210520 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

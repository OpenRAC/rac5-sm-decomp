extern int func_0A7AB8(unsigned int value);
extern char D_00200060[];

int func_0A7D10(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_0A7AB8(slot) == 0)
        return 0;
    value = *(int **)(D_00200060 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

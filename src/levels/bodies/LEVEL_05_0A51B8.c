extern int func_0A4F60(unsigned int value);
extern char D_001E63E0[];

int func_0A51B8(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_0A4F60(slot) == 0)
        return 0;
    value = *(int **)(D_001E63E0 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

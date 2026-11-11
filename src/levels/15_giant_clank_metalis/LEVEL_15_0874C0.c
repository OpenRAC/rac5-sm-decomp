extern int func_087268(unsigned int value);
extern char D_0014BCE0[];

int func_0874C0(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_087268(slot) == 0)
        return 0;
    value = *(int **)(D_0014BCE0 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

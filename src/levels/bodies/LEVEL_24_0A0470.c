extern int func_0A0218(unsigned int value);
extern char D_001C7CE0[];

int func_0A0470(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_0A0218(slot) == 0)
        return 0;
    value = *(int **)(D_001C7CE0 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}

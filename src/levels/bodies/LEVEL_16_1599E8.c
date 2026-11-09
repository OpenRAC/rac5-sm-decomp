/* LEVEL_16:0x1599E8 -- returns a word from a child table at a row stride plus a mode-dependent offset. */
int func_1599E8(char *object, int index, unsigned int mode)
{
    int row = index * 0x1C;
    unsigned int flag = (mode < 1);
    int alt = flag * 0xEC;
    int sum = row + alt;

    return *(int *)(*(char **)(object + 0x58) + sum);
}

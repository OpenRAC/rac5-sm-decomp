extern int D_001F2B40[];

void func_1A8F20(char *record)
{
    int scratch[4];
    int *index = (int *)(record + 0xf8);
    scratch[0] = 0;
    if (*index < 1) index = scratch;
    D_001F2B40[*index] = 0;
}

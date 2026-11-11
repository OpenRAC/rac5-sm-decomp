extern int D_001F7EE0[];

void func_1B2DB8(char *record)
{
    int scratch[4];
    int *index = (int *)(record + 0xf8);
    scratch[0] = 0;
    if (*index < 1) index = scratch;
    D_001F7EE0[*index] = 0;
}

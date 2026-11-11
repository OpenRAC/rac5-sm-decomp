extern int D_0021DAE8[];

void func_1CD9A0(char *record)
{
    int scratch[4];
    int *index = (int *)(record + 0xf8);
    scratch[0] = 0;
    if (*index < 1) index = scratch;
    D_0021DAE8[*index] = 0;
}

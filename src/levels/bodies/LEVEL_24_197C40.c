extern int D_001D9E10[];

void func_197C40(char *record)
{
    int scratch[4];
    int *index = (int *)(record + 0xf8);
    scratch[0] = 0;
    if (*index < 1) index = scratch;
    D_001D9E10[*index] = 0;
}

extern int D_001F7DE8[];

void func_1AA160(char *record)
{
    int scratch[4];
    int *index = (int *)(record + 0xf8);
    scratch[0] = 0;
    if (*index < 1) index = scratch;
    D_001F7DE8[*index] = 0;
}

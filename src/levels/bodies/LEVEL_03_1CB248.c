extern int D_00221DF8[];

void func_1CB248(char *record)
{
    int scratch[4];
    int *index = (int *)(record + 0xf8);
    scratch[0] = 0;
    if (*index < 1) index = scratch;
    D_00221DF8[*index] = 0;
}

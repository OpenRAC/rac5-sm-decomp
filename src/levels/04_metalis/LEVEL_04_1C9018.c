extern int D_00222690[];

void func_1C9018(char *record)
{
    int scratch[4];
    int *index = (int *)(record + 0xf8);
    scratch[0] = 0;
    if (*index < 1) index = scratch;
    D_00222690[*index] = 0;
}

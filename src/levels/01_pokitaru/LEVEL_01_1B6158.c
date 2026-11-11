extern int D_00208E38[];

void func_1B6158(char *record)
{
    int scratch[4];
    int *index = (int *)(record + 0xf8);
    scratch[0] = 0;
    if (*index < 1) index = scratch;
    D_00208E38[*index] = 0;
}

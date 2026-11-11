extern int D_0021DEB0[];

void func_1D8648(char *record)
{
    int scratch[4];
    int *index = (int *)(record + 0xf8);
    scratch[0] = 0;
    if (*index < 1) index = scratch;
    D_0021DEB0[*index] = 0;
}

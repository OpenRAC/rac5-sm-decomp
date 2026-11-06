extern int D_001DC248[];

void func_199650(char *record)
{
    int scratch[4];
    int *index = (int *)(record + 0xf8);
    scratch[0] = 0;
    if (*index < 1) index = scratch;
    D_001DC248[*index] = 0;
}

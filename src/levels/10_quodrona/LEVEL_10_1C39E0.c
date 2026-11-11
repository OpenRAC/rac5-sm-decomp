extern int D_00211C90[];

void func_1C39E0(char *record)
{
    int scratch[4];
    int *index = (int *)(record + 0xf8);
    scratch[0] = 0;
    if (*index < 1) index = scratch;
    D_00211C90[*index] = 0;
}

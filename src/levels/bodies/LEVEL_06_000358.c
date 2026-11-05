extern char D_001FA380[];

int func_000358(int index)
{
    char *record = D_001FA380 + index * 0x14;
    return ((int *)record)[3];
}

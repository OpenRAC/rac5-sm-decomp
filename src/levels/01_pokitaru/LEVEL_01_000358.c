extern char D_0020B500[];

int func_000358(int index)
{
    char *record = D_0020B500 + index * 0x14;
    return ((int *)record)[3];
}

extern char D_001DE680[];

int func_000358(int index)
{
    char *record = D_001DE680 + index * 0x14;
    return ((int *)record)[3];
}

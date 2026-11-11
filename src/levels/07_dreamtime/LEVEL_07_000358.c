extern char D_00220200[];

int func_000358(int index)
{
    char *record = D_00220200 + index * 0x14;
    return ((int *)record)[3];
}

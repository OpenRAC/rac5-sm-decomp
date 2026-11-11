extern char D_00220480[];

int func_000358(int index)
{
    char *record = D_00220480 + index * 0x14;
    return ((int *)record)[3];
}

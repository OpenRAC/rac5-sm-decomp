extern char D_00255180[];

int func_000358(int index)
{
    char *record = D_00255180 + index * 0x14;
    return ((int *)record)[3];
}

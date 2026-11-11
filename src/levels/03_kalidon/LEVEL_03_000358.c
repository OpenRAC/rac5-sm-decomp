extern char D_00224400[];

int func_000358(int index)
{
    char *record = D_00224400 + index * 0x14;
    return ((int *)record)[3];
}

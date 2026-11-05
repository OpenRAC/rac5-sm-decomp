extern char D_001F5100[];

int func_000358(int index)
{
    char *record = D_001F5100 + index * 0x14;
    return ((int *)record)[3];
}

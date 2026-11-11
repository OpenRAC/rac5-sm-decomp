extern char D_00268510[];

void func_098EC8(void)
{
    char *p = D_00268510;
    p[0] = 0;
    *(int *)(p + 8) = 0;
    *(int *)(p + 0xc) = 0;
    *(int *)(p + 0x10) = 0;
    *(char **)(p + 0x20) = p + 0x1c;
    *(char **)(p + 0x1c) = p + 0x1c;
}

extern char D_00254198[];

void func_08E930(void)
{
    char *p = D_00254198;
    p[0] = 0;
    *(int *)(p + 8) = 0;
    *(int *)(p + 0xc) = 0;
    *(int *)(p + 0x10) = 0;
    *(char **)(p + 0x20) = p + 0x1c;
    *(char **)(p + 0x1c) = p + 0x1c;
}

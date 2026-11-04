extern char D_001F5C4C[];

int func_1294B0(void)
{
    int *p = *(int *)D_001F5C4C;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}

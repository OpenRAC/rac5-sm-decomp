extern char D_001B5FDC[];

int func_10E9A0(void)
{
    int *p = *(int *)D_001B5FDC;

    return (*(int *)((char *)p + 0x94) >> 1) & 1;
}

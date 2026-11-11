extern char D_001B5FDC[];

int func_10E908(int unused)
{
    int *p = *(int *)D_001B5FDC;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}

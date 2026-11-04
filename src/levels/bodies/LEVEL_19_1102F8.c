extern char D_001B5CDC[];

int func_1102F8(void)
{
    int *p = *(int *)D_001B5CDC;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}

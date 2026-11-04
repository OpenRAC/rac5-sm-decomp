extern char D_001B5CDC[];

int func_110390(void)
{
    int *p = *(int *)D_001B5CDC;

    return (*(int *)((char *)p + 0x94) >> 1) & 1;
}

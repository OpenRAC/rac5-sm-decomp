extern char D_001D7CCC[];

int func_1289F8(void)
{
    int *p = *(int *)D_001D7CCC;

    return (*(int *)((char *)p + 0x94) >> 1) & 1;
}

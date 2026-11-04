extern char D_001D7CCC[];

int func_1288E0(void)
{
    int *p = *(int *)D_001D7CCC;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}

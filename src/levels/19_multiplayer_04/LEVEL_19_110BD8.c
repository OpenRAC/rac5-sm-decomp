extern int D_001B5CDC;

int func_110BD8(void)
{
    int *p = (int *)D_001B5CDC;

    if (p == 0)
        return -1;
    return p[55];
}

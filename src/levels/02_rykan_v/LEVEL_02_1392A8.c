extern char D_0021C00C[];

int func_1392A8(void)
{
    int *p = *(int *)D_0021C00C;

    return (*(int *)((char *)p + 0x94) >> 1) & 1;
}

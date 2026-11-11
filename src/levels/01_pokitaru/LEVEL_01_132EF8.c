extern char D_0020704C[];

int func_132EF8(void)
{
    int *p = *(int *)D_0020704C;

    return (*(int *)((char *)p + 0x94) >> 1) & 1;
}

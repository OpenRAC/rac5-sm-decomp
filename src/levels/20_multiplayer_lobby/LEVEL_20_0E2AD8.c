extern char D_0011721C[];

int func_0E2AD8(void)
{
    int *p = *(int *)D_0011721C;

    return (*(int *)((char *)p + 0x94) >> 1) & 1;
}

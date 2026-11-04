extern char D_0016602C[];

int func_10A2B0(void)
{
    int *p = *(int *)D_0016602C;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}

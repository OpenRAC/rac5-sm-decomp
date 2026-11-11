extern char D_001A815C[];

int func_10F1D0(int unused)
{
    int *p = *(int *)D_001A815C;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}

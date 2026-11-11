extern char D_0021C00C[];

int func_139190(int unused)
{
    int *p = *(int *)D_0021C00C;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}

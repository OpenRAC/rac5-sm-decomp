extern char D_0020FCAC[];

int func_130C40(int unused)
{
    int *p = *(int *)D_0020FCAC;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}

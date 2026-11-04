extern char D_0015B9AC[];

int func_0F1CA8(void)
{
    int *p = *(int *)D_0015B9AC;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}

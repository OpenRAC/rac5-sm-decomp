int func_142EC0(void *);

int func_1430A8(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_142EC0(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

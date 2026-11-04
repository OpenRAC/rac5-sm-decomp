int func_127488(void *);

int func_127670(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_127488(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

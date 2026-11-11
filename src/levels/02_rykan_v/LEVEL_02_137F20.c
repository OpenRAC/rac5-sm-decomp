int func_137D38(void *);

int func_137F20(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_137D38(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

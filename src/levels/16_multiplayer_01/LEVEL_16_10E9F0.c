int func_10E808(void *);

int func_10E9F0(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_10E808(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

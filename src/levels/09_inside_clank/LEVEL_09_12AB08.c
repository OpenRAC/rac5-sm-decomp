int func_12A920(void *);

int func_12AB08(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_12A920(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

int func_12D300(void *);

int func_12D4E8(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_12D300(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

int func_123100(void *);

int func_1232E8(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_123100(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

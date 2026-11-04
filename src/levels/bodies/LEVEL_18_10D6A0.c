int func_10D4B8(void *);

int func_10D6A0(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_10D4B8(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

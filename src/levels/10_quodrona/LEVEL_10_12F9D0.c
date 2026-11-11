int func_12F7E8(void *);

int func_12F9D0(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_12F7E8(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

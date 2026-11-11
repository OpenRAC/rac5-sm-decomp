int func_0F0850(void *);

int func_0F0A38(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_0F0850(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

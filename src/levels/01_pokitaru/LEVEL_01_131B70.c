int func_131988(void *);

int func_131B70(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_131988(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

int func_134988(void *);

int func_134B70(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_134988(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

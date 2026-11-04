int func_13DE08(void *);

int func_13DFF0(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_13DE08(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

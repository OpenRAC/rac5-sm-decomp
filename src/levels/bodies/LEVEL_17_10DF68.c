int func_10DD80(void *);

int func_10DF68(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_10DD80(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

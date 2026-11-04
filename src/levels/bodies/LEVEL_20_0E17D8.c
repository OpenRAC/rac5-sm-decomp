int func_0E15F0(void *);

int func_0E17D8(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_0E15F0(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

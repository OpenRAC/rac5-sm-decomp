int func_128058(void *);

int func_128240(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_128058(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

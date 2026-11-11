int func_01F150(void *);

int func_01F338(void *a0)
{
    int *p = *(int **)a0;
    int r = 0;

    if (!p)
        return 0;
    if (func_01F150(p))
        r = (*(int *)((char *)p + 4) >> 1) & 1;
    return r;
}

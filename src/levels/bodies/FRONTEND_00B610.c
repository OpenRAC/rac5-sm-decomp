int func_00B658(void *);

int func_00B610(void *p)
{
    int r = func_00B658(p);
    int v = *(int *)((char *)p + 4);

    return (r >> 1) + v;
}

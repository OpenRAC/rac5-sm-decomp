int func_0B0108(void *);
int func_0AFFF8(void *, int);

int func_0B0188(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_0B0108(p);
    return func_0AFFF8(p, r);
}

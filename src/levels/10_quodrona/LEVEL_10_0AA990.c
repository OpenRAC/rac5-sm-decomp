int func_0AA910(void *);
int func_0AA800(void *, int);

int func_0AA990(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_0AA910(p);
    return func_0AA800(p, r);
}

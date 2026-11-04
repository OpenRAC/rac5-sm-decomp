int func_0AB7F8(void *);
int func_0AB6E8(void *, int);

int func_0AB878(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_0AB7F8(p);
    return func_0AB6E8(p, r);
}

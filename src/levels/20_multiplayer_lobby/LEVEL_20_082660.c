int func_0825E0(void *);
int func_0824D0(void *, int);

int func_082660(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_0825E0(p);
    return func_0824D0(p, r);
}

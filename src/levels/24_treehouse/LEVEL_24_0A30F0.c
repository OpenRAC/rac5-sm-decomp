int func_0A3070(void *);
int func_0A2F60(void *, int);

int func_0A30F0(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_0A3070(p);
    return func_0A2F60(p, r);
}

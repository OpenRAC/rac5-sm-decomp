int func_0A3FC8(void *);
int func_0A3EB8(void *, int);

int func_0A4048(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_0A3FC8(p);
    return func_0A3EB8(p, r);
}

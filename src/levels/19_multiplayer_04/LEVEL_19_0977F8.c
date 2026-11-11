int func_097778(void *);
int func_097668(void *, int);

int func_0977F8(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_097778(p);
    return func_097668(p, r);
}

int func_097E08(void *);
int func_097CF8(void *, int);

int func_097E88(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_097E08(p);
    return func_097CF8(p, r);
}

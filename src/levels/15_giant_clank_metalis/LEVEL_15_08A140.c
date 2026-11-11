int func_08A0C0(void *);
int func_089FB0(void *, int);

int func_08A140(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_08A0C0(p);
    return func_089FB0(p, r);
}

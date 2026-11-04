int func_0A0568(void *);
int func_0A0458(void *, int);

int func_0A05E8(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_0A0568(p);
    return func_0A0458(p, r);
}

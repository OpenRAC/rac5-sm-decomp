int func_097EE8(void *);
int func_097DD8(void *, int);

int func_097F68(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_097EE8(p);
    return func_097DD8(p, r);
}

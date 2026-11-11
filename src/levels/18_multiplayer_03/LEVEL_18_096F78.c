int func_096EF8(void *);
int func_096DE8(void *, int);

int func_096F78(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_096EF8(p);
    return func_096DE8(p, r);
}

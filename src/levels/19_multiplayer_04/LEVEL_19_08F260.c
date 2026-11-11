int func_08EFD0(void *, int);
void *func_08F028(void *, int, void *);
int func_08F0F8(void *, void *);

int func_08F260(void *a0, void *a1, int a2, void *a3)
{
    void *r;

    if (a0 == 0 || a1 == 0)
        return 0;
    if (a2 < 4)
        return 0;
    if (*(int *)a1 != 0x2E47494D)
        return 0;
    if (func_08EFD0(a1, a2) == 0)
        return 0;
    r = func_08F028(a1, a2, a3);
    if (r == 0)
        return 0;
    return func_08F0F8(a0, r);
}

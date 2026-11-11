/* LEVEL_10:0x1E02B8 -- passes a float through two helpers and bumps a counter in the first argument record. */
extern int func_017798(int *a0, int a1);
extern int func_1E0170(int a0, int a1, float f0, int a2);
extern void func_081308(int a0);

void func_1E02B8(int *a0, int a1, float f12)
{
    int *p;
    float f;
    int t;
    int r;

    f = f12;
    p = a0;
    t = func_017798(p, a1);
    r = func_1E0170(*p, t, f, a1);
    func_081308(r);
    *p = *p + 1;
}

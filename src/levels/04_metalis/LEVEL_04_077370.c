/* LEVEL_04:0x077370 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
typedef struct Y {
    char pad0[0x10];
    void *p10;
} Y;
typedef struct {
    char pad0[0xDC];
    void *cb;
} Z;
typedef struct {
    char pad0[0x48];
    Z *z48;
} X;
typedef struct T {
    X *x;
    void *f4;
    char pad8[0x18];
    Y *y;
} T;
extern T D_00254630[];
extern int D_0020F574;
extern void func_077068(void);
extern void func_07C270(X *x, int f);
extern void func_083F98(Y *y);

void func_077370(T *t)
{
    int n;
    T *last;

    func_07C270(t->x, (int)func_077068);
    func_083F98(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_077068)
        t->x->z48->cb = t->f4;
    n = --D_0020F574;
    if (n != 0) {
        last = &D_00254630[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

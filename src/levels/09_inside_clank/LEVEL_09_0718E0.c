/* LEVEL_09:0x0718E0 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_002215A0[];
extern int D_001DFEB4;
extern void func_0715D8(void);
extern void func_076070(X *x, int f);
extern void func_07D5B8(Y *y);

void func_0718E0(T *t)
{
    int n;
    T *last;

    func_076070(t->x, (int)func_0715D8);
    func_07D5B8(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_0715D8)
        t->x->z48->cb = t->f4;
    n = --D_001DFEB4;
    if (n != 0) {
        last = &D_002215A0[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

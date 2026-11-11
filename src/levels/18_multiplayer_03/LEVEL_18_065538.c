/* LEVEL_18:0x065538 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_001EC870[];
extern int D_001A4F84;
extern void func_0651E0(void);
extern void func_069C28(X *x, int f);
extern void func_072D30(Y *y);

void func_065538(T *t)
{
    int n;
    T *last;

    func_069C28(t->x, (int)func_0651E0);
    func_072D30(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_0651E0)
        t->x->z48->cb = t->f4;
    n = --D_001A4F84;
    if (n != 0) {
        last = &D_001EC870[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

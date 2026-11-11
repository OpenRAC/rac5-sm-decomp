/* LEVEL_16:0x065CE8 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_001EC4F0[];
extern int D_001A3B04;
extern void func_065990(void);
extern void func_06A4F0(X *x, int f);
extern void func_073680(Y *y);

void func_065CE8(T *t)
{
    int n;
    T *last;

    func_06A4F0(t->x, (int)func_065990);
    func_073680(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_065990)
        t->x->z48->cb = t->f4;
    n = --D_001A3B04;
    if (n != 0) {
        last = &D_001EC4F0[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

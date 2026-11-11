/* LEVEL_19:0x065ED8 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_001EC670[];
extern int D_001A4C84;
extern void func_065B80(void);
extern void func_06A5C8(X *x, int f);
extern void func_0737C8(Y *y);

void func_065ED8(T *t)
{
    int n;
    T *last;

    func_06A5C8(t->x, (int)func_065B80);
    func_0737C8(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_065B80)
        t->x->z48->cb = t->f4;
    n = --D_001A4C84;
    if (n != 0) {
        last = &D_001EC670[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

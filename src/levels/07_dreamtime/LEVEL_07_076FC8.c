/* LEVEL_07:0x076FC8 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_0024F720[];
extern int D_0020A3B4;
extern void func_076CC0(void);
extern void func_07B758(X *x, int f);
extern void func_082CA0(Y *y);

void func_076FC8(T *t)
{
    int n;
    T *last;

    func_07B758(t->x, (int)func_076CC0);
    func_082CA0(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_076CC0)
        t->x->z48->cb = t->f4;
    n = --D_0020A3B4;
    if (n != 0) {
        last = &D_0024F720[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

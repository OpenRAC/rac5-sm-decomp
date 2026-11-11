/* LEVEL_05:0x073DE8 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_00225B20[];
extern int D_001E5434;
extern void func_073AE0(void);
extern void func_075B80(X *x, int f);
extern void func_07E1D8(Y *y);

void func_073DE8(T *t)
{
    int n;
    T *last;

    func_075B80(t->x, (int)func_073AE0);
    func_07E1D8(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_073AE0)
        t->x->z48->cb = t->f4;
    n = --D_001E5434;
    if (n != 0) {
        last = &D_00225B20[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

/* LEVEL_20:0x0585E0 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_00143D58[];
extern int D_001061E4;
extern void func_058288(void);
extern void func_059748(X *x, int f);
extern void func_062640(Y *y);

void func_0585E0(T *t)
{
    int n;
    T *last;

    func_059748(t->x, (int)func_058288);
    func_062640(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_058288)
        t->x->z48->cb = t->f4;
    n = --D_001061E4;
    if (n != 0) {
        last = &D_00143D58[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

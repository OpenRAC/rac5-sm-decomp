/* LEVEL_17:0x0664A8 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_001DD7F0[];
extern int D_00197104;
extern void func_066150(void);
extern void func_06AB98(X *x, int f);
extern void func_073DB0(Y *y);

void func_0664A8(T *t)
{
    int n;
    T *last;

    func_06AB98(t->x, (int)func_066150);
    func_073DB0(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_066150)
        t->x->z48->cb = t->f4;
    n = --D_00197104;
    if (n != 0) {
        last = &D_001DD7F0[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

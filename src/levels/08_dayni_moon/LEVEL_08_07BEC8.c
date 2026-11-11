/* LEVEL_08:0x07BEC8 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_002890B0[];
extern int D_0023EF74;
extern void func_07BBC0(void);
extern void func_080DF0(X *x, int f);
extern void func_088AA8(Y *y);

void func_07BEC8(T *t)
{
    int n;
    T *last;

    func_080DF0(t->x, (int)func_07BBC0);
    func_088AA8(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_07BBC0)
        t->x->z48->cb = t->f4;
    n = --D_0023EF74;
    if (n != 0) {
        last = &D_002890B0[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

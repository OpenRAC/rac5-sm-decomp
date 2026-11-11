/* LEVEL_03:0x074BA0 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_00254CA0[];
extern int D_0020E734;
extern void func_074898(void);
extern void func_079360(X *x, int f);
extern void func_080918(Y *y);

void func_074BA0(T *t)
{
    int n;
    T *last;

    func_079360(t->x, (int)func_074898);
    func_080918(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_074898)
        t->x->z48->cb = t->f4;
    n = --D_0020E734;
    if (n != 0) {
        last = &D_00254CA0[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

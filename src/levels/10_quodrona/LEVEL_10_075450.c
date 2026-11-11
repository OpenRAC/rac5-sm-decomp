/* LEVEL_10:0x075450 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_00243220[];
extern int D_001FF0B4;
extern void func_075148(void);
extern void func_079C08(X *x, int f);
extern void func_081168(Y *y);

void func_075450(T *t)
{
    int n;
    T *last;

    func_079C08(t->x, (int)func_075148);
    func_081168(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_075148)
        t->x->z48->cb = t->f4;
    n = --D_001FF0B4;
    if (n != 0) {
        last = &D_00243220[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

/* LEVEL_21:0x05D408 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_00181E88[];
extern int D_0014AD34;
extern void func_05D100(void);
extern void func_05E610(X *x, int f);
extern void func_0655E8(Y *y);

void func_05D408(T *t)
{
    int n;
    T *last;

    func_05E610(t->x, (int)func_05D100);
    func_0655E8(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_05D100)
        t->x->z48->cb = t->f4;
    n = --D_0014AD34;
    if (n != 0) {
        last = &D_00181E88[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

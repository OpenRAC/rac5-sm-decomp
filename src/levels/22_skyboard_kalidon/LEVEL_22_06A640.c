/* LEVEL_22:0x06A640 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_0018BA20[];
extern int D_00155434;
extern void func_06A338(void);
extern void func_06BF28(X *x, int f);
extern void func_073510(Y *y);

void func_06A640(T *t)
{
    int n;
    T *last;

    func_06BF28(t->x, (int)func_06A338);
    func_073510(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_06A338)
        t->x->z48->cb = t->f4;
    n = --D_00155434;
    if (n != 0) {
        last = &D_0018BA20[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

/* LEVEL_02:0x07B698 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_00251330[];
extern int D_0020B074;
extern void func_07B390(void);
extern void func_07FE50(X *x, int f);
extern void func_087408(Y *y);

void func_07B698(T *t)
{
    int n;
    T *last;

    func_07FE50(t->x, (int)func_07B390);
    func_087408(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_07B390)
        t->x->z48->cb = t->f4;
    n = --D_0020B074;
    if (n != 0) {
        last = &D_00251330[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

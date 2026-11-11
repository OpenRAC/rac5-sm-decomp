/* LEVEL_24:0x06EDD0 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_00205D20[];
extern int D_001C6D34;
extern void func_06EAC8(void);
extern void func_073CD0(X *x, int f);
extern void func_07B218(Y *y);

void func_06EDD0(T *t)
{
    int n;
    T *last;

    func_073CD0(t->x, (int)func_06EAC8);
    func_07B218(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_06EAC8)
        t->x->z48->cb = t->f4;
    n = --D_001C6D34;
    if (n != 0) {
        last = &D_00205D20[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

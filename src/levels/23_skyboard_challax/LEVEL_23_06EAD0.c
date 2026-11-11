/* LEVEL_23:0x06EAD0 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_002072A0[];
extern int D_001C94B4;
extern void func_06E7C8(void);
extern void func_070840(X *x, int f);
extern void func_077F38(Y *y);

void func_06EAD0(T *t)
{
    int n;
    T *last;

    func_070840(t->x, (int)func_06E7C8);
    func_077F38(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_06E7C8)
        t->x->z48->cb = t->f4;
    n = --D_001C94B4;
    if (n != 0) {
        last = &D_002072A0[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

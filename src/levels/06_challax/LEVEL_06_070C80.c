/* LEVEL_06:0x070C80 -- placement copy of LEVEL_01_074DB0.c: releases a pooled entry by moving the last entry into its slot. */
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
extern T D_00226BA0[];
extern int D_001E4FB4;
extern void func_070978(void);
extern void func_0729F0(X *x, int f);
extern void func_07A718(Y *y);

void func_070C80(T *t)
{
    int n;
    T *last;

    func_0729F0(t->x, (int)func_070978);
    func_07A718(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_070978)
        t->x->z48->cb = t->f4;
    n = --D_001E4FB4;
    if (n != 0) {
        last = &D_00226BA0[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

/* LEVEL_01:0x074DB0 -- releases a pooled entry by moving the last entry into its slot. */
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
extern T D_00239E20[];
extern int D_001F60B4;
extern void func_074AA8(void);
extern void func_079568(X *x, int f);
extern void func_080B38(Y *y);

void func_074DB0(T *t)
{
    int n;
    T *last;

    func_079568(t->x, (int)func_074AA8);
    func_080B38(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_074AA8)
        t->x->z48->cb = t->f4;
    n = --D_001F60B4;
    if (n != 0) {
        last = &D_00239E20[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}

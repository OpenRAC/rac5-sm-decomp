/* LEVEL_07:0x08AD38 -- placement copy of LEVEL_01_088CA0.c: makes a node the current one of a controller and updates its link flags. */
typedef struct N N;
typedef struct {
    unsigned f14;
    int f18;
    float f1C;
} T;
typedef struct {
    char pad0[0x2C];
    unsigned short f2C;
} Q;

struct N {
    int *arr;
    Q *q;
    float f8;
    char padC[0x14 - 0xC];
    T t;
    unsigned f20;
    unsigned char b24;
};

typedef struct {
    char pad0[4];
    unsigned flags;
    char pad8[4];
    int fC;
    char pad10[4];
    N *p14;
    N *cur;
} X;

extern int D_0020A58C[1];
extern int func_08BC80(void *z, N *y);
extern void func_08ABF0(X *x, N *y, float f);
extern int func_08AC78(X *x);
extern void func_08AB60(X *x, int a, int b, int c);
extern void func_08B538(N *n, int a, int b);

void func_08AD38(X *x, N *y, void *z, int flag, int s7, int t1, int t2, float fa, float fb)
{
    N *p;
    T *tp;

    D_0020A58C[0] = x->fC;
    if (x->flags & 0x80) {
        func_08BC80(z, y);
        func_08ABF0(x, y, fb);
        return;
    }
    if (x->p14 && (x->p14->q->f2C & 1))
        x->flags |= 0x100;
    if (func_08AC78(x) != 0 || flag == 0) {
        if (y == x->cur)
            return;
        func_08AB60(x, y->arr[D_0020A58C[0]], t1, t2);
        x->p14 = 0;
        x->flags |= 1;
    } else {
        if (x->p14 == y)
            return;
    }
    if (z)
        func_08BC80(z, y);
    x->flags &= ~2;
    y->b24 = 0;
    y->f20 &= ~4;
    x->cur = y;
    y->f8 = fb;
    func_08B538(x->cur, 0, 0);
    tp = &y->t;
    tp->f1C = fa;
    tp->f18 = 0;
    y->t.f14 = 1;
    p = x->p14;
    if (p) {
        if (flag)
            p->t.f14 = 2;
        else
            p->t.f14 = p->t.f14 & ~2;
    }
    if (s7) {
        x->cur->t.f14 |= 2;
        x->flags &= ~2;
    } else {
        x->flags |= 2;
        x->cur->t.f14 &= ~2;
    }
}

/* LEVEL_03:0x1D5710 -- placement copy of LEVEL_01_1BFF20.c: releases a table of resource handles. */
typedef struct { int *h0, *h1; int *a[5]; } Tab;
typedef struct { char pad0[0x58]; Tab *tab; } Obj;
extern int *D_0020EA18;
extern void func_0975C8(int *h);

static inline void release(int **slot)
{
    if (*slot) {
        if (*slot == D_0020EA18)
            D_0020EA18 = 0;
        else
            func_0975C8(*slot);
        *slot = 0;
    }
}

void func_1D5710(Obj *o)
{
    Tab *t;
    unsigned i;
    int *h;
    int **p;

    t = o->tab;
    release(&t->h0);
    for (i = 0, p = t->a; i < 5; i++, p++)
        release(p);
    h = t->h1;
    while (h) {
        if (h == D_0020EA18)
            D_0020EA18 = 0;
        else
            func_0975C8(h);
        t->h1 = 0;
        h = t->h1;
    }
}

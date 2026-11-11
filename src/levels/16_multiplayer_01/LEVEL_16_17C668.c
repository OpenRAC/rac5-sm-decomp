/* LEVEL_16:0x17C668 -- placement copy of LEVEL_01_1BFF20.c: releases a table of resource handles. */
typedef struct { int *h0, *h1; int *a[5]; } Tab;
typedef struct { char pad0[0x58]; Tab *tab; } Obj;
extern int *D_001A43C8;
extern void func_0883B0(int *h);

static inline void release(int **slot)
{
    if (*slot) {
        if (*slot == D_001A43C8)
            D_001A43C8 = 0;
        else
            func_0883B0(*slot);
        *slot = 0;
    }
}

void func_17C668(Obj *o)
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
        if (h == D_001A43C8)
            D_001A43C8 = 0;
        else
            func_0883B0(h);
        t->h1 = 0;
        h = t->h1;
    }
}

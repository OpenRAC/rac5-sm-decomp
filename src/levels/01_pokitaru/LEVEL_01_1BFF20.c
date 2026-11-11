/* LEVEL_01:0x1BFF20 -- releases a table of resource handles. */
typedef struct { int *h0, *h1; int *a[5]; } Tab;
typedef struct { char pad0[0x58]; Tab *tab; } Obj;
extern int *D_001F6398;
extern void func_097840(int *h);

static inline void release(int **slot)
{
    if (*slot) {
        if (*slot == D_001F6398)
            D_001F6398 = 0;
        else
            func_097840(*slot);
        *slot = 0;
    }
}

void func_1BFF20(Obj *o)
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
        if (h == D_001F6398)
            D_001F6398 = 0;
        else
            func_097840(h);
        t->h1 = 0;
        h = t->h1;
    }
}

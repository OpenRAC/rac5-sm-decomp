/* LEVEL_01.REL:0x1BFF20: reviewed 212-byte candidate, held for ABI review.
 * Releases a table of resource handles.
 * pinned C with gnu-ee-trial links 212/212 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It declares func_097840 returning void with (int), but the accepted
 * LEVEL_01_097840.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct { int h0, h1; int a[5]; } Tab;
typedef struct { char pad0[0x58]; Tab *tab; } Obj;
extern int D_001F6398;
extern void func_097840(int h);

static inline void release(int *slot)
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
    int h;
    int *p;

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

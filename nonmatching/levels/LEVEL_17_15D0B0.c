/* USA LEVEL_17.REL:0x15D0B0, 176-byte candidate (14 November 2026).
 * Measured pinned: 14 differing words; first difference at 12.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct V3 {
    float x, y, z;
} V3;

typedef struct Obj {
    char pad0[0x30];
    V3 pos;
} Obj;

extern int func_075350(V3 *p);

static __inline__ void AddPos(V3 *d, V3 *q)
{
    d->x = d->x + q->x;
    d->y = d->y + q->y;
    d->z = d->z + q->z;
}

int func_15D0B0(V3 *a, V3 *b, Obj *o)
{
    if (!func_075350(a))
        return 0;
    AddPos(b, &o->pos);
    AddPos(a, &o->pos);
    return 1;
}

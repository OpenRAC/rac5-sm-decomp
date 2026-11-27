/* LEVEL_17:0x15E790 -- placement copy of LEVEL_17_15D0B0.c: callback: when the first vector passes the check, shifts both vectors by the object's position and reports success. */
typedef struct V3 {
    float x, y, z;
} V3;

typedef struct Obj {
    char pad0[0x30];
    V3 pos;
} Obj;

extern int func_075000(V3 *a, V3 *b, Obj *o);

static __inline__ void AddPos(V3 *d, V3 *q)
{
    d->x = d->x + q->x;
    d->y = d->y + q->y;
    d->z = d->z + q->z;
}

int func_15E790(V3 *a, V3 *b, Obj *o)
{
    if (!func_075000(a, b, o))
        return 0;
    AddPos(b, &o->pos);
    AddPos(a, &o->pos);
    return 1;
}

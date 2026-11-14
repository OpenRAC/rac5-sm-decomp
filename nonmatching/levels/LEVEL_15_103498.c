/* USA LEVEL_15.REL:0x103498, 196-byte candidate (14 November 2026).
 * Measured pinned: 10 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x, y, z;
} V3;

typedef struct {
    char pad00[0x50];
    V3 vel;
    float step;
    V3 v60;
    char pad6C[0x84 - 0x6C];
    V3 prev;
    V3 v90;
    char pad9C[0xC0 - 0x9C];
    V3 vC0;
    char padCC[0x210 - 0xCC];
    V3 pos;
    char pad21C[0x228 - 0x21C];
    float scale;
} Obj;

extern void func_0EC3A0(V3 *a, V3 *b, V3 *c, V3 *d);
extern void func_0ECE10(int a, V3 *b, float x, float y, float z);

static __inline__ void Madd(V3 *d, V3 *s, float k)
{
    d->x = d->x + s->x * k;
    d->y = d->y + s->y * k;
    d->z = d->z + s->z * k;
}

void func_103498(Obj *o)
{
    Madd(&o->pos, &o->vel, o->step);
    o->prev.x = o->pos.x;
    o->prev.y = o->pos.y;
    o->prev.z = o->pos.z;
    func_0EC3A0(&o->vC0, &o->v90, &o->v60, &o->prev);
    func_0ECE10(0, &o->vC0, o->scale, o->scale, o->scale);
    o->step = -o->step;
}

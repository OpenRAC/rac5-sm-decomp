/* LEVEL_05:0x184390 -- adds three floats of the caller's second vector to
   the three floats of its first vector and bumps a counter byte. */
typedef struct {
    unsigned char pad[0x59];
    unsigned char count;
} Counter;

typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    char pad[0x24];
    V3 v;
} Dst;

typedef struct {
    char pad[0x30];
    V3 v;
    char pad2[0x58 - 0x3C];
    Counter *p_58;
} Src;

void func_184390(Src *a0, Dst *a1)
{
    V3 *s = &a0->v;
    V3 *d = &a1->v;
    Counter *c = a0->p_58;

    d->x = d->x + s->x;
    d->y = d->y + s->y;
    d->z = d->z + s->z;
    c->count = c->count + 1;
}

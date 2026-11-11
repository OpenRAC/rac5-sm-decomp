/* LEVEL_08:0x1BC968 -- placement copy of LEVEL_04_19BC38.c: while the object is in state 2 and active, spawns two effects: one at its position offset by 0.13 of its vector and a second at that point pushed back by 0.26 of the vector. */
typedef struct {
    float x, y, z;
} V3;

typedef struct {
    V3 vec;
    char pad0C[0x30 - 0x0C];
    V3 pos;
    char pad3C[0x45 - 0x3C];
    unsigned char state;
    unsigned char active;
} Obj;

extern int D_00251E20;

static __inline__ void Madd(V3 *out, V3 *a, V3 *b, float k)
{
    out->x = a->x + b->x * k;
    out->y = a->y + b->y * k;
    out->z = a->z + b->z * k;
}

extern void func_0A4220(V3 *pos, Obj *o, float f1, float f2, int arg, unsigned int color);

void func_1BC968(Obj *o)
{
    V3 p;

    if (o->active == 0) {
        return;
    }
    if (o->state != 2) {
        return;
    }
    Madd(&p, &o->pos, &o->vec, 0.13f);
    func_0A4220(&p, o, 0.2f, 0.2f, D_00251E20, 0xFF00C8FFu);
    Madd(&p, &p, &o->vec, -0.26f);
    func_0A4220(&p, o, 0.2f, 0.2f, D_00251E20, 0xFF00C8FFu);
}

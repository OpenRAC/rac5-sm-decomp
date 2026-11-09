/* LEVEL_24:0x170688 -- placement copy of LEVEL_04_19A268.c: returns the nearest matching object to a position. */
typedef struct Vec3 { float x, y, z; } Vec3;

typedef struct Rec {
    char pad0[0x24];
    unsigned int w24;
} Rec;

typedef struct Obj {
    char pad0[0x30];
    Vec3 pos;
    char pad1[0x40 - 0x3C];
    Rec *p40;
} Obj;

extern unsigned int func_01A9D8(Obj **, int, Vec3 *, int, int, int, int, float);

Obj *func_170688(Vec3 *pos)
{
    Obj *list[32];
    Obj *best;
    float bestd;
    float dx, dy, dz, d;
    unsigned int n;
    unsigned int i;
    Obj *o;
    Vec3 *p;

    n = func_01A9D8(list, 0x20, pos, 0xA9, 0x81, 4, 0, 0.5f);
    if (n == 0)
        return 0;
    bestd = 1.0e30f;
    best = 0;
    for (i = 0; i < n; i++) {
        o = list[i];
        if (o->p40->w24 == 0xCDE706C1) {
            p = &o->pos;
            dx = pos->x - p->x;
            dy = pos->y - p->y;
            dz = pos->z - p->z;
            d = dx * dx + dy * dy + dz * dz;
            if (d < bestd) {
                best = o;
                bestd = d;
            }
        }
    }
    return best;
}

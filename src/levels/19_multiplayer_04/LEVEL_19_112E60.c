/* LEVEL_19:0x112E60 -- placement copy of LEVEL_16_1127C0.c: finds the closest of two objects to a point, optionally returning the squared distance. */
struct Vec {
    float x, y, z;
};
struct Obj {
    char pad[0x30];
    struct Vec pos;
};
extern float D_001D07D8;
extern struct Obj *func_113490(unsigned int i);

struct Obj *func_112E60(struct Vec *p, float *out)
{
    unsigned int i;
    struct Obj *best = 0;
    struct Obj *o;
    float bestd = D_001D07D8;
    float dx, dy, dz, d;
    struct Vec *v;

    for (i = 0; i < 2; i++) {
        o = func_113490(i);
        if (o) {
            v = &o->pos;
            dx = v->x - p->x;
            dy = v->y - p->y;
            dz = v->z - p->z;
            d = dx * dx + dy * dy + dz * dz;
            if (d < bestd) {
                bestd = d;
                best = o;
            }
        }
    }
    if (out)
        *out = bestd;
    return best;
}
